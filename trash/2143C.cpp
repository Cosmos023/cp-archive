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

void dfs(int v, vi& p, int& x, vector<vi>& adj)
{
	p[v]=x;
	x++;
	for(int ch:adj[v])
	{
		dfs(ch, p, x, adj);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<int> par(n+1,-1);
	vector<vi> adj(n+1);
	int root = 1;
 	for(int i=1; i<n; i++)
 	{
 		int u,v,x,y; cin>>u>>v>>x>>y;
 		if(x>y) swap(u, v);
 		vi z;
		while(par[v]!=-1)
		{
			z.push_back(v);
			v=par[v];
		}
		for(int c:z) par[c]=u;
		par[v]=u;
 		adj[u].push_back(v);
 	}
 	for(int i=1; i<=n; i++) if(par[i]==-1) root=i;
 	vi p(n+1,0);
 	int x = 1;
 	dfs(root, p, x, adj);
 	pL1(p,n);
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

