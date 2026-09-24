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

lli dfs(int x, vector<vll>& rux, vi& vis, vector<vi>& adj)
{
	vis[x]=1;
	lli sz = 0;
	for(int ch:adj[x])
	{
		if(vis[ch]) continue;
		lli k = dfs(ch, rux, vis, adj);
		rux[x].push_back(k); sz+=k;
	}
	return sz+1;
}

bool issq(lli x)
{
	lli z = sqrt(x);
	return z*z==x;
}

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n+1);
	vector<vi> adj(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<n-1; i++)
	{
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<vll> rux(n+1);
	vi vis(n+1, 0);
	dfs(1, rux, vis, adj);
	lli ans = 0;
	for(int i=2; i<=n; i++) rux[i].push_back(n-1-accumulate(all(rux[i]),0));
	for(int i=1; i<=n; i++)
	{
		if(!issq(a[i])) continue;
		lli S1 = n-1;
		lli S2 = 0;
		lli S3 = 0;
		for(int j = 0; j < rux[i].size(); j++)
		{
			S2+=rux[i][j]*rux[i][j];
			S3+=rux[i][j]*rux[i][j]*rux[i][j];
		}
		ans += (S1*S1-S2)/2;
		ans += (S1*S1*S1-3*S2*S1+2*S3)/6;
	}
	cout<<ans<<endl;
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

