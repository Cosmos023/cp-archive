#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
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

// Bridges in a graph
// Tarzan algorithm [wilted rose emoji]
// Tarjan


ll ans;
int T=0;
int n, m;

int dfs(int x, int p, vi& low, vi& tin, vi& vis, vector<vi>& adj)
{
	vis[x]=1;
	tin[x]=low[x]=T; T++;
	int sz=1;
	for(int ch:adj[x])
	{
		if(ch==p) continue;
		if(vis[ch]) low[x]=min(low[x], tin[ch]);
		else
		{
			int k = dfs(ch, x, low, tin, vis, adj);
			sz+=k;
			low[x]=min(low[x], low[ch]);
			if(low[ch]>tin[x]) ans=max(ans, 1LL*k*(n-k)); // size of the two components will be k and n-k
		}
	}
	return sz;
}

void solve()
{
	cin >> n >> m;
	vector<vi> adj(n+1);
	for(int i = 0; i < m; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vi low(n+1, -1), tin(n+1, -1), vis(n+1, 0);
	T=0;
	ans = 0;
	dfs(1, 0, low, tin, vis, adj);
	cout<<1LL*n*(n-1)/2-ans<<endl;
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

