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

void solve()
{
	int n;
	cin >> n;
	vector<vi> adj(n+1);
	vector<pii> P;
	for(int i=0; i<n-1; i++)
	{
		int u,v; cin>>u>>v;
		adj[v].push_back(u);
		adj[u].push_back(v);
		P.push_back({u,v});
	}
	int k = -1;
	for(int i = 1; i <= n; i++)
	{
		if(adj[i].size()>=3) {k=i; break;}
	}
	if(k==-1)
	{
		for(int i = 0; i < n-1; i++)
		{
			cout<<i<<endl;
		}
		return;
	}
	map<pii,int> ans;
	for(int i = 0; i<3; i++)
	{
		ans[{k,adj[k][i]}]=i;
	}
	int A = 3;
	for(int i = 0; i < n-1; i++)
	{
		if(ans.find(P[i])!=ans.end() || ans.find({P[i].second, P[i].first})!=ans.end()) continue;
		ans[P[i]] = A++;
	}
	for(int i = 0; i < n-1; i++)
	{
		if(ans.find(P[i])!=ans.end())
			cout<<ans[P[i]]<<endl;
		else cout<<ans[{P[i].second, P[i].first}]<<endl;
	}
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

