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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

vector<int> adj[500005];
vi visited(500005, -1);
vi c;

void dfs(int vertex)
{
	visited[vertex] = 0;
	c.push_back(vertex);
	for(int child : adj[vertex])
	{
		if(visited[child]!=-1) continue;
		dfs(child);
	}
}

void solve()
{
	int n,m;
	cin >> n>>m;
	vector<int> a(n);
 	for(int i=0; i<m; i++)
 	{
 		int k; cin>>k;
 		vi g(k);
 		for(int j=0;j<k;j++) cin>>g[j];
 		if(k>=1)
 		{
 			for(int j = 1; j<k; j++)
 			{
 				adj[g[0]].push_back(g[j]);
 				adj[g[j]].push_back(g[0]);
 			}
 		}
 	}
 	for(int i=1; i<=n; i++)
 	{
 		if(visited[i]==-1) 
 		{
 			dfs(i);
 			for(int ci:c) visited[ci]=c.size();
 			c.clear();
 		}
 	}
 	for(int i=1; i<=n; i++)
 		if(visited[i]==-1)visited[i]=1;
 	plist1(visited, n);
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

