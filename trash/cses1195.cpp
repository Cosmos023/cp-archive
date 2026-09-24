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

vector<vector<pii>> adj(200005);
bool visited[200005];

vector<vector<lli>> dijkstra(int n, vector<vector<pii>>& adj, int src)
{
    // vector<int> dist0(n, INT_MAX); // coupon not used
    // vector<int> dist1(n, INT_MAX); // coupon used;
		vector<vector<lli>> dist(n+1,vector<lli>(2, LLONG_MAX));
    priority_queue<tuple<lli, int, int>, vector<tuple<lli, int, int>>, greater<>> pq;

    dist[src][0] = 0;
    pq.push({0, src, 0});

    while(!pq.empty())
    {
        auto [d, u, used] = pq.top();
        pq.pop();

        // Ignore outdated entries
        if(d > dist[u][used]) continue;
        for(auto [v, w] : adj[u])
        {
          if(dist[u][used]!=LLONG_MAX && dist[u][used] + w < dist[v][used])
          {
            dist[v][used] = dist[u][used] + w;
            pq.push({dist[v][used], v, used});
          }
          if(dist[u][0]!=LLONG_MAX && dist[u][0] + w/2 < dist[v][1])
          {
            dist[v][1] = dist[u][0] + w/2;
            pq.push({dist[v][1], v, 1});
          }
        }
    }

    return dist;
}

void solve()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		int v, u,c;
		cin >> v >> u>>c;
		adj[v].push_back({u,c});
	}
	vector<vector<lli>> ans = dijkstra(n, adj, 1);
	cout<<ans[n][1]<<"\n";
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

