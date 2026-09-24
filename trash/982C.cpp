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

vector<int> adj[100005];
bool visited[100005];

lli ans = -1;

int dfs(int vertex)
{
	visited[vertex] = 1;
	int subtree_sz = 1;
	for(int child : adj[vertex])
	{
		if(visited[child]) continue;
		subtree_sz += dfs(child);
	}
	if((subtree_sz)%2==0) {ans++;}
	return (subtree_sz);
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
	if(n%2)
	{
		cout<<"-1";
	}
	else
	{
		dfs(1);
		cout<<ans;
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

