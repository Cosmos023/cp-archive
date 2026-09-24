#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void dfs(int x, int p, int g, vi& d, vi& a, vector<vi>& adj)
{
	debug(x, p, g, a);
	if(a[x]==a[p] || a[x]==a[g]) d[a[x]]=1;
	map<int, int> M;
	for(int ch: adj[x])
	{
		if(ch==p) continue;
		M[a[ch]]++;
		dfs(ch, x, p, d, a, adj);
	}
	for(auto [v, c]:M) if(c>=2) d[v]=1;
}

void solve()
{
	int n;
	cin >> n;
	vector<vi> adj(n+1);
	vi a(n+1);
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=0; i<n-1; i++)
	{
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vi d(n+1, 0);
	dfs(1, 0, 0, d, a, adj);
	for(int i = 0; i < n; i++)
	{
		cout<<d[i+1];
	}
	cout<<endl;
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

