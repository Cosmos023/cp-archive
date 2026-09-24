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
int ans = 0;
string s;

pii dfs(int vertex)
{
	int b = 0, w = 0;
	int y;
	for(int child : adj[vertex])
	{
		if(visited[child]) continue;
		auto [bc, wc] = dfs(child);
		b+=bc;w+=wc;
	}
	if(s[vertex]=='W') w++; else b++;
	if(w==b) ans++;
	return {b,w};
}
void solve()
{
	int n;
	cin >> n;
 	for(int i=1; i<=n; i++) adj[i].clear();
 	for(int i=2; i<=n; i++)
 	{
 		int x;
 		cin >> x;
 		adj[x].push_back(i);
 	}
 	cin>>s;
 	s="!"+s;
 	ans = 0;
 	dfs(1);
 	cout<<ans<<"\n";
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

