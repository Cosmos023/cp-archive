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

vector<int> adj[200005];
bool visited[200005];
vector<int> parent(200005, 0);
vector<int> dist(200005, 0);

void bfs(int source)
{
    queue<int> q;

    q.push(source);
    visited[source] = 1;

    while(!q.empty())
    {
        int vertex = q.front();
        q.pop();

        for(int child : adj[vertex])
        {
            if(visited[child]) continue;

            visited[child] = 1;
            q.push(child);
            parent[child]=vertex;
            dist[child] = dist[vertex]+1;
        }
    }
}

pair<int,int> height(int source, int par)
{
    queue<int> q;

    q.push(source);
    visited[source] = 1;
    vi vis;
    vis.push_back(source);
    while(!q.empty())
    {
        int vertex = q.front();
        q.pop();

        for(int child : adj[vertex])
        {
            if(visited[child] || child==par) continue;

            visited[child] = 1;
            vis.push_back(child);
            q.push(child);
            dist[child] = dist[vertex]+1;
        }
    }
    int ver = source;
    for(int c: vis)
    {
        if(dist[ver]<dist[c])
        {
            ver = c;
        }
    }
    return {dist[ver], ver};
}

void solve()
{
	int n;
    cin >> n;
    for(int i = 0; i<n-1; i++)
    {
        int v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    bfs(1);
    int M = 1;
    for(int i = 1; i<=n; i++)
    {
        if(dist[M]<dist[i]) M=i;
    }
    for(int i = 1; i<=n; i++) parent[i]=0;
    for(int i = 1; i<=n; i++) dist[i]=0;
    for(int i = 1; i<=n; i++) visited[i]=0;
    bfs(M);
    int m = M;
    // pL1(dist, n);
    for(int i = 1; i<=n; i++)
    {
        if(dist[m]<dist[i]) m=i;
    }
    vi diam;
    while(parent[m]!=0)
    {
        diam.push_back(m);
        m = parent[m];
    }
    diam.push_back(m);

    for(int i = 1; i<=n; i++) parent[i]=0;
    for(int i = 1; i<=n; i++) dist[i]=0;
    for(int i = 1; i<=n; i++) visited[i]=0;

    vi an;
    an.push_back(diam[0]);
    an.push_back(diam.back());
    int ans = diam.size()-1;
    int k = -1;
    int v=0;
    for(int i = 1; i<=diam.size()-2; i++)
    {
        for(int c: adj[diam[i]])
        {
            if(c==diam[i-1] || c==diam[i+1]) continue;
            pair<int, int> p = height(c, diam[i]);
            // k = max(k, height(c, diam[i]));
            if(k<=p.first)
            {
                k = p.first;
                v = p.second;
            }
        }
    }
    if(k!=-1)
    {
        an.push_back(v);
        cout<<ans+k+1<<"\n";
        pL(an);
    }
    else
    {
        an.push_back(diam[1]);
        cout<<ans<<"\n";
        pL(an);
    }
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

