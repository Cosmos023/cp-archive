#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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

bool dfs(int x, int M, vi& done, vector<vi>& adj)
{
	done[x]=1;
	int y = 1;
	if(adj[x].size()!=2) {debug(x); y=0;}
	if(done[adj[x][0]] && done[adj[x][1]] && (adj[x][0]==M||adj[x][1]==M)) return true;
	if(done[adj[x][0]] && done[adj[x][1]]) y=0;
	int z;
	if(!done[adj[x][0]]) z=adj[x][0]; else z=adj[x][1];
	debug(z, M);
	return y&dfs(z, M, done, adj);
}

void solve()
{
	ll n, m;
	cin >> n >> m;
	vector<vi> adj(n+1);
	for(int i = 0; i < m; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	ll k = sqrtl(n);
	if(n==2 || k*k!=n || k*k+k!=m) {NO; return;}
	vi mol(n+1);
	for(int i = 1; i <= n; i++)
	{
		if(adj[i].size()==2) continue;
		if(adj[i].size()==4){mol[i]=1; continue;}
		{NO; return;}
	}
	if(accumulate(all(mol), 0)!=k) {NO; return;}
	vi done(n+1, 0);
	for(int i = 1; i<=n; i++)
	{
		if(!mol[i]) {continue;}
		int x=-1;
		for(int c:adj[i]) if(adj[c].size()==2) x=c;
		debug(x, i);
		if(x==-1){NO; return;}
		done[i]=1;
		if(!dfs(x, i, done, adj)) {debug("hi"); NO; return;}
	}
	YES;
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

