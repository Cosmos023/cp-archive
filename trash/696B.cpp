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

using ld = long double;

int dfs(int x, vi& ST, vector<vi>& adj)
{
	for(int ch : adj[x])
	{
		ST[x] += dfs(ch, ST, adj);
	}
	ST[x]++;
	return ST[x];
}

void dfs2(int x, vi& ST, vector<vi>& adj, vi& P, vector<ld>& ans)
{
	if(x!=1)
	{
		int k = adj[P[x]].size();
		if(k==1){ans[x] = ans[P[x]]+1;}
		else
		{
			ans[x] = 1.0L*(ST[P[x]]-1-ST[x])/2;
			ans[x] += 1+ans[P[x]];
		}
	}
	for(int ch : adj[x])
	{
		dfs2(ch, ST, adj, P, ans);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<vi> adj(n+1);
	vi ST(n+1, 0);
	vi P(n+1, 0);
	for(int i=2; i<=n; i++)
	{
		int p; cin>>p;
		adj[p].push_back(i);
		P[i]=p;
	}
	dfs(1, ST, adj);
	vector<ld> ans(n+1, 0);
	ans[1]=1;
	dfs2(1, ST, adj, P, ans);
	debug(ans);
	for(int i=1; i<=n; i++) cout<<fixed<<setprecision(15)<<ans[i]<<" ";
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

