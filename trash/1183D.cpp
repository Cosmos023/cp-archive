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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int,int> m;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		m[a[i]]++;
 	}
 	vi c;
 	for(auto p:m)c.push_back(p.second);
 	sor(c);
 	lli ans = c.back();
 	int M = c.back();
 	for(int i=c.size()-2; i>=0; i--)
 	{
 		if(c[i]<M)
 		{
 			M = c[i];
 			ans+=M;
 		}
 		else
 		{
 			M = max(0, M-1); ans+=M;
 		}
 	}
 	cout<<ans<<"\n";
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

