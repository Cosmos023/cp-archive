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

lli dfs(lli x, set<lli>& vis, map<lli, vll>& mp)
{
	if(vis.find(x)!=vis.end()) return 0;
	vis.insert(x);
	lli M = x;
	for(lli ch:mp[x])
	{
		M = max(M, dfs(ch, vis, mp));
	}
	return M;
}

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n);
	vector<pair<lli,lli>> p(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	lli ans = n;
 	map<lli, vll> mp;
 	set<lli> vis;
 	for(int i=0; i<n; i++)
 	{
 		mp[a[i]+i].push_back(a[i]+2*i);
 	}
 	ans = dfs(n, vis, mp);
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