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
lli ans = 0;
int m = 0;
void dfs(int vertex,vi& a, int st)
{
	visited[vertex] = 1;
	int y = 1;
	for(int child : adj[vertex])
	{
		if(visited[child]) continue;
		y=0;
		if(st>m) {dfs(child, a, st); continue;}
		if(a[child])
			dfs(child, a, st+1);
		else
			dfs(child, a, 0);
	}
	if(y && (st<=m))
		ans++;
}
void solve()
{
	int n;
	cin >> n >> m;
	vector<int> a(n+1,0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
	for(int i = 0; i<n-1; i++)
	{
		int v, u;
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	ans = 0;
	if(a[1]) 
		dfs(1, a, 1);
	else dfs(1, a, 0);
	cout<<ans<<"\n";
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

