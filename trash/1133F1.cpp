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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

vector<int> adj[200005];
bool p[200005];
bool visited[200005];
int M = 1;

void dfs(int vertex)
{
	visited[vertex] = 1;
	for(int child : adj[vertex])
	{
		if(visited[child]) continue;
		if(p[child]&&vertex!=M) continue;
		cout<<vertex<<" "<<child<<"\n";
		dfs(child);
	}
}

void solve()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		int v, u;
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	for(int i = 2; i<=n; i++)
	{
		if(adj[i].size()>adj[M].size())
		{
			M = i;
		}
	}
	for(int c:adj[M]) p[c]=true;
	dfs(M);
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

