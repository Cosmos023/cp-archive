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
lli ans = 1;
void dfs(int vertex, vi& c, int x)
{
	visited[vertex] = 1;

	for(int child : adj[vertex])
	{
		if(visited[child]) continue;
		if(c[child]!=x) ans++;
		dfs(child, c, c[child]);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<int> p(n+1), c(n+1);
 	for(int i=2; i<=n; i++)
 	{
 		cin >> p[i];
 		adj[i].push_back(p[i]);
 		adj[p[i]].push_back(i);
 	}
 	for(int i=1; i<=n; i++) cin>>c[i];
 	dfs(1, c, c[1]);
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

