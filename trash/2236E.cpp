#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	vector<si> vvi(n+1);
 	map<pair<int,int>,int> mp;
 	for(int i=0; i<n; i++)
 	{
 		si s;
 		for(int j=i; j<n; j++)
 		{
 			if(s.find(a[j])!=s.end()) break;
 			s.insert(a[j]);
 			if(s.size()==(*s.rbegin()-*s.begin()+1))
 			{
 				// sp.insert({i, j-i+1});
 				vvi[j-i+1].insert(i);
 				mp[{j-i+1,i}]=*s.begin();
 			}
 		}
 	}
 	for(int i=n; i>=1; i--)
 	{
 		// cout<<i<<" ";
 		// pL(vvi[i]);
 		// for(int c:vvi[i]) cout<<mp[{i,c}]<<" ";
 		// cout<<endl;
 		for(int c:vvi[i])
 		{
 			auto it = vvi[i].upper_bound(c+i-1);
 			while(it!=vvi[i].end())
 			{
 				if(mp[{i, c}]+i == mp[{i, *it}] || mp[{i, c}] == i+mp[{i, *it}])
 				{
	 				cout<<i<<"\n";
	 				return;
 				}
 				it++;
 			}
 		}
 	}
 	cout<<"0\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

