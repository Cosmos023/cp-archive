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

void dfs(int v, int x, vi& dist,  vector<vi>& adj)
{
	dist[v]=x;
	for(int ch:adj[v])
	{
		dfs(ch,x+1, dist, adj);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<int> p(n+1);
	for(int i=2; i<=n; i++) cin >> p[i];
	vector<vi> s(n+1);
	for(int i=2; i<=n; i++) 
	{
		s[p[i]].push_back(i);
	}
	vi dist(n+1,-1);
	dist[0]=1;
	dfs(1,0, dist, s);
	// debug(dist);
	vector<si> se(n+1);
	for(int i=1; i<=n; i++) 
	{
		se[dist[i]].insert(i);
	}
	lli ans = 0;
	debug(se);
	
	

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

