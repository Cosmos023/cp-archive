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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif
long double ans = 0;

void dfs(int x, long double P, int L, vi& vis, vector<vi>& adj)
{
	vis[x]=true;
	int C = 0;
	vi Z;
	for(int ch:adj[x])
	{
		if(!vis[ch])
		{
			C++;
			Z.push_back(ch);
		}
	}
	for(int ch:Z)
	{
		dfs(ch, P/C, L+1, vis, adj);
	}
	if(C==0)
	{
		ans+=L*P;
	debug(x, ans, P, L);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<vi> adj(n+1); vi vis(n+1, 0);
	for(int i = 0; i < n-1; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, 1.0, 0, vis, adj);
	cout<<fixed<<setprecision(15)<<ans<<endl;
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

