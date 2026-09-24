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

vector<int> adj[200005];
bool visited[200005];
int dist[200005];
vi in(200005), gl(200005);
vi ans;
// int flipped = 0;

void dfs(int vertex, int flip)
{
	visited[vertex] = 1;

	for(int child : adj[vertex])
	{
		if(dist[child]<=dist[vertex]) continue;
		for(int gc : adj[child])
		{
			if(dist[gc]<=dist[child]) continue;
			if((flip && gl[gc]==in[gc]) || (!flip && gl[gc]!=in[gc]))
			{
				ans.push_back(gc);
				dfs(gc, 1-flip);
			}
			else
				dfs(gc, flip);
		}
	}
}



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
            dist[child]=dist[vertex]+1;
            visited[child] = 1;
            q.push(child);
        }
    }
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
	for(int i = 1; i<=n; i++) cin>>in[i];
	for(int i = 1; i<=n; i++) cin>>gl[i];
	dist[1]=0; bfs(1);
	if(in[1]==gl[1])
	{
		dfs(1,0);
	}
	else
	{
		ans.push_back(1);
		dfs(1,1);
	}
	for(int ch:adj[1])
	{
		if(in[ch]!=gl[ch])
		{
			ans.push_back(ch);
			dfs(ch, 1);
		}
		else
		{
			dfs(ch,0);
		}
		// cout<<ch<<"\n";
	}
	cout<<ans.size()<<"\n";
	for(int c: ans) cout<<c<<"\n";
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

