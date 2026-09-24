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

void dfs(int x, vi& T, vector<bool>& vis, vector<vi>& adj)
{
	if(vis[x]) return;
	vis[x]=true;
	for(int ch:adj[x])
	{
		dfs(ch, T, vis, adj);
	}
	t++;
	T[x]=t;
}

int C=0;
void dfs2(int x, vi& color, vector<bool>& vis, vector<vi>& adj)
{
	if(vis[x]) return;
	vis[x]=1;
	color[x]=C;
	for(int ch:adj[x])
	{
		dfs2(ch,color,vis,adj);
	}
}

void solve()
{
	int n,m;
	cin >> n >> m;
	vector<vi> adj(n+1);
	vector<vi> adjT(n+1);
	for(int i = 0; i < m; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adjT[v].push_back(u);
	}
	vector<bool> vis(n+1, false);
	vi T(n+1,-1);
	for(int i = 0; i < n; i++)
	{
		if(!vis[i+1])
			dfs(i+1, T, vis, adj);
	}
	debug(T);
	vector<pii> vp;
	for(int i = 1; i <= n; i++) vp.push_back({T[i],i}); sort(rall(vp));

	for(int i = 1; i <= n; i++) vis[i]=0;
	vi color(n+1,-1);
	for(auto& [tm, x]:vp)
	{
		if(vis[x]) continue;
		dfs2(x,color,vis,adjT);
		C++;
	}
	debug(vp,color);
	for(int i = 1; i <= n; i++) vis[i]=0;
	for(int i = 1; i < n; i++)
	{
		if(color[i]!=color[i+1])
		{
			NO;
			dfs(i, T, vis, adj);
			if(vis[i+1]) cout<<i+1<<" "<<i<<endl;
			else cout<<i<<" "<<i+1<<endl;
			return;
		}
	}
	YES;
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

