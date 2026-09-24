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

struct Edge {
    lli u, v, w;
};

vector<int> adj[5000];
bool visited[5000];

void solve()
{
	lli n, m;
	cin >> n >> m;
	vector<Edge> edges;
	for(int i = 0; i<m; i++)
	{
		lli v, u, c;
		cin >> v >> u >> c;
		edges.push_back({v,u,c});
		adj[u].push_back(v);
			// cout<<v<<"\n";
	}
	vector<lli> dist(n+1, 0);
	vector<int> parent(n+1, -1);


	for(int i = 0; i<n-1; i++)
	{
		for(auto E:edges)
		{
			if(dist[E.u]!=LLONG_MAX && dist[E.u] + E.w < dist[E.v])
			{
				dist[E.v] = dist[E.u]+E.w;
				parent[E.v] = E.u;
	// pL(dist);
			}
		}
	}

	int y = -1;
	for(auto E:edges)
	{
		if(dist[E.u]!=LLONG_MAX && dist[E.u] + E.w < dist[E.v])
		{
			y = E.v; 
		}
	}
	if(y==-1)
	{
		NO; return;
	}

	for(int i = 0; i < n; i++)
    	y = parent[y];
	vector<int> path;
	int cur = y;
	do {
	    path.push_back(cur);
	    cur = parent[cur];
	} while(cur != y);


    reverse(path.begin(), path.end());
    YES;
    pL(path);
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

