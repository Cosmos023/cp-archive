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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

int t = 0;
void dfs(int x, vi& T, vi& vis, vector<vi>& adj)
{
	if(vis[x]) return;
	vis[x]=1;
	for(int ch:adj[x])
	{
		dfs(ch,T,vis, adj);
	}
	t++;
	T[x]=t;
}

void dfs2(int x, si& ans, vi& vis, vector<vi>& adj)
{
	if(vis[x]) return;
	vis[x]=1;
	ans.insert(x);
	for(int ch:adj[x])
	{
		dfs2(ch,ans,vis,adj);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<int> C(n+1);
	for(int i=0; i<n; i++) cin >> C[i+1];
	vector<vi> adj(n+1), adt(n+1);
	int m; cin>>m;
	for(int i = 0; i < m; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adt[v].push_back(u);
	}
	vi T(n+1,-1), vis(n+1,0);
	for(int i = 0; i < n; i++)
	{
		if(!vis[i+1]) dfs(i+1, T, vis, adj);
	}
	vector<pii> vp;
	for(int i = 0; i < n; i++) vp.push_back({T[i+1],i+1}); sort(rall(vp));
	vi VIS(n+1,0);
	vector<si> CC;
	for(auto& [tm, x]:vp)
	{
		if(!VIS[x])
		{
			si an;
			dfs2(x, an, VIS, adt);
			CC.push_back(an);
		}
	}
	debug(CC);
	lli ans = 0;
	lli ans2 = 1;
	for(si& s:CC)
	{
		vi costs;
		for(int p:s) costs.push_back(C[p]);
		ans+=*min_element(all(costs));
		ans2 *= count(all(costs), *min_element(all(costs)));
		ans2%=((lli)(1e9+7));
	}
	cout<<ans<<endl<<ans2<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

