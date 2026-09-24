#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	string s; cin>>s;
	int m; cin>>m;
	string l; cin>>l;
	string r; cin>>r;

	int n = s.size();
	int start=0;
	for(int i = 0; i<m; i++)
	{
		set<int> si;
		while(si.size()!=r[i]-l[i]+1)
		{
			if(start>=n)
			{
				cout<<"YES\n";
				return;
			}
			if(s[start]<=r[i] && s[start]>=l[i])
				si.insert(s[start]-'0');
			start++;
		}
		// pL(si);
	}
	cout<<"NO\n";
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

