#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
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

vll D(500005, 0);
vll P(500005, 0);
vector<vll> adj(500005);

void dfs(int x, int dist, int p, int k)
{
	D[x]=dist;
	P[x]=k;
	for(int ch:adj[x])
	{
		if(ch!=p) dfs(ch,dist+1,x,k);
	}
}

void solve()
{
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n-1; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int ch:adj[1])
	{
		vi k;
		dfs(ch, 1, 1, ch);
	}
	pL1(D,n);
	pL1(P,n);
	map<lli, vector<pll>> M; //pll=sbtrhd,nd
	for(int i = 1; i <= n; i++)
	{
		M[D[i]].push_back({P[i], i});
	}
	for(auto& [dd, V]: M) sor(V);
	lli ans = M[k].size();
	debug(ans);
	for(int i = 2; i <= n; i++)
	{
		vector<pll>& Z = M[k+D[i]];
		int T = (upper_bound(all(Z), make_pair(P[i],LLONG_MAX))-Z.begin());
		T -= (lower_bound(all(Z), make_pair(P[i],-1*1LL))-Z.begin());
		ans+=T;
	debug(ans, P[i], Z, k+D[i], T);

	debug(ans, P[i], Z, k+D[i], T);

		vector<pll>& X = M[-D[i]+k];
		// T = (upper_bound(all(X), make_pair(P[i],LLONG_MAX))-X.begin());
		// T -= (lower_bound(all(X), make_pair(P[i],-1*1LL))-X.begin());
		// ans+=Z.size()-T;
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

