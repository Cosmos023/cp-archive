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
using adll = vector<vector<pair<lli,lli>>>;
using pll = pair<lli, lli>;

pll dfs(int x, vll& st, vll& sc, adll& adj, vll& p)
{
	st[x]=1;sc[x]=0; 
	for(auto& [ch,w]: adj[x])
	{
		if(st[ch]!=-1) continue;
		pll T = dfs(ch, st, sc, adj, p); p[ch] = x;
		st[x]+=T.first;
		sc[x]+=T.second+w*T.first;
	}
	return {st[x], sc[x]};
}
map<pll, lli> M;
int n;
void dfs2(int x, vll& st, vll& sc, adll& adj, vll& p, vll& ans)
{
	if(x==1) ans[1] = sc[1];
	else
	{
		ans[x]+=sc[x];
		ans[x]+= ans[p[x]]-sc[x]-st[x]*M[{x,p[x]}];
		ans[x]+= (n-st[x])*M[{x,p[x]}];
	}
	for(auto& [ch,w]: adj[x])
	{
		if(ans[ch]!=0) continue;
		dfs2(ch, st,sc,adj,p,ans);
	}
	debug(x);
}
void solve()
{
	M.clear();
	cin >> n;
	vector<vector<pair<lli,lli>>> adj(n+1);
	for(int i=0; i<n-1; i++)
	{
		lli u, v, w; cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
		M[{u,v}]=w;
		M[{v,u}]=w;
	}
	vll st(n+1, -1), sc(n+1, -1), p(n+1,0);
	dfs(1, st, sc, adj, p);
	debug(sc,st, p);
	vll ans(n+1, 0);
	dfs2(1, st, sc, adj, p, ans);
	debug(ans);
	pL1(ans,n);
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

