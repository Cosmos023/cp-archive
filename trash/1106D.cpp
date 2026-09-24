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

set<int> adj[100005];
bool visited[100005];

void solve()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		int v, u;
		cin >> v >> u;
		adj[v].insert(u);
		adj[u].insert(v);
	}
	vi an;
	si candidates;
	an.push_back(1);
	visited[1]=1;
	for(int c:adj[1]) if(!visited[c]) candidates.insert(c);
	while(!candidates.empty())
	{
		auto i = candidates.begin();
		an.push_back(*i);
		visited[*i]=1;
		for(int c:adj[*i]) if(!visited[c]) candidates.insert(c);
		candidates.erase(i);
	}
	pL(an);
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

