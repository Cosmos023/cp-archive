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

pii dfs(int x, vi& val, vector<vi>& adj)
{
	if(val[x]!=0) return {val[x], val[x]};
	vector<pii> Z;
	for(int ch:adj[x])
	{
		pii V = dfs(ch, val, adj);
		if(V.first==-1) return {-1, -1};
		Z.push_back(V);
	}
	int m = Z[0].first, M = Z[0].second;
	int c = 0;
	si D;
	for(int i = 1; i<Z.size(); i++)
	{
		if(Z[i].first<Z[i-1].second) c++;
		m = min(m, Z[i].first);
		M = max(M, Z[i].second);
		if(D.find(Z[i].first)!= D.end()) return{-1, -1};
		if(D.find(Z[i].second)!= D.end()) return{-1, -1};
		D.insert(Z[i].second);
		D.insert(Z[i].first);
	}
	if(Z.back().second > Z[0].first) c++;
	if(c>=2) return {-1, -1};
	pii ans = {m, M};
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	vector<vi> adj(n+1);
	vi val(n+1);
	for(int i = 0; i < n-1; i++)
	{
		int p; cin>>p;
		adj[p].push_back(i+2);
	}
	for(int i = 0; i < n; i++) cin>>val[i+1];
	if(dfs(1, val, adj).first==-1)
		NO;
	else YES;
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

