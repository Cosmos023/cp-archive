#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ll = long long int;
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

bool dfs(int x, vi& vis, vi& color, int& R, int& B, vector<vi>& adj)
{
	if(color[x]==0) R++; else B++;
	vis[x]=true;
	int y = true;
	for(int ch: adj[x])
	{
		if(vis[ch] && (color[ch] == color[x])) {y = false; continue;}
		if(vis[ch]) continue;
		color[ch] = 1-color[x];
		y &= dfs(ch, vis, color, R, B, adj);
	}
	return y;
}

void solve()
{
	lli n, m; cin>>n>>m;
	vector<vi> adj(n+1);
	for(int i=0; i<m; i++)
	{
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vi vis(n+1, 0);
	vi color(n+1, -1);
	lli ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(vis[i]) continue;
		int R=0, B=0;
		color[i]=0;
		if(!dfs(i, vis, color, R, B, adj)) continue;
		ans+=max(R, B);
	}
	cout<<ans<<endl;
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

