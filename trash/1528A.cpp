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

vector<int> adj[100005];
bool visited[100005];

void dfs(int x, vll& l, vll& r, vll& dpl, vll& dpr)
{
	visited[x]=1;
	lli sl = 0, sr=0;
	for(int ch:adj[x])
	{
		if(visited[ch]) continue;
		dfs(ch, l, r, dpl, dpr);
		sl += max(dpl[ch]+abs(l[ch]-l[x]), dpr[ch]+abs(r[ch]-l[x]));
		sr += max(dpl[ch]+abs(l[ch]-r[x]), dpr[ch]+abs(r[ch]-r[x]));
	}
	dpl[x]=sl;
	dpr[x]=sr;
}

void solve()
{
	int n;
	cin >> n;
	vector<lli> l(n+1);
	vector<lli> r(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> l[i] >> r[i];
 	}
 	for(int i=1; i<n; i++)
 	{
 		int u,v; cin>>u>>v;
 		adj[u].push_back(v);
 		adj[v].push_back(u);
 	}
 	vector<lli> dpl(n+1,INT_MIN);
 	vector<lli> dpr(n+1,INT_MIN);
 	dfs(1, l, r, dpl, dpr);
 	cout<<max(dpl[1], dpr[1])<<"\n";
 	for(int i=1; i<=n; i++)
 	{
 		visited[i]=0; adj[i].clear();
 	}
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

