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

void dfs(int x, vi& ans, vi& vis, vector<vi>& adj)
{
	if(vis[x]) return;
	vis[x]=1;
	lli s = 0;
	int leaf = 1;
	for(int ch:adj[x])
	{
		if(vis[ch]) continue;
		dfs(ch,ans,vis,adj);
		s+=ans[ch];
		leaf=0;
	}
	s+=leaf;
	ans[x]=s;
}

void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> adj(n+1);
	vector<int> visited(n+1, 0);
	vector<int> ans(n+1, 0);
	for(int i = 0; i<n-1; i++)
	{
		int v, u;
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	dfs(1, ans, visited, adj);
	int q; cin>>q;
	while(q--)
	{
		int x,y; cin>>x>>y;
		cout<<1LL*ans[x]*ans[y]<<endl;
	}
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

