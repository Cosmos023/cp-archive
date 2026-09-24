#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
using ll = long long int;
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

int ans = 0;
map<int, vi> M;

void dfs(int x, int p, int c, int last1, vi& a, deque<int>& an, vector<vi>& adj)
{
	if(c!=0) ans++;
	if(c%2) an.push_front(x);
	else M[last1].push_back(x);
	for(int ch:adj[x])
	{
		if(p==ch) continue;
		if(a[x]==1) dfs(ch, x, c+1, x, a, an, adj);
		else dfs(ch, x, c, last1, a, an, adj);
	}
}

void say(int c)
{
	if(!M[c].empty())
	{
		for(int z:M[c]) say(z);
	}
	cout<<c<<" ";
}

void solve()
{
	ans = 0;
	M.clear();
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<vi> adj(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<n-1; i++)
	{
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	deque<int> an;
	dfs(1, 0, 0, -1, a, an, adj);
	cout<<ans<<endl;
	for(int c:an)
	{
		 say(c);
	}
	cout<<endl;
	for(auto p:M)
	{
		debug(p.first, p.second);
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

