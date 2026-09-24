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
	ll n, m;
	cin >> n >> m;
	vector<vll> adj(n+1);
	map<pair<ll, ll>, bool> M;
	for(int i=0; i<m; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		M[{u, v}]=1;
		M[{v, u}]=1;
	}
	for(int x = 1; x <= n; x++)
	{
		if(adj[x].size()<3) continue;
		vll Z;
		for(ll ch:adj[x])
		{
			if(adj[ch].size()>=3) Z.push_back(ch);
		}
		for(int i = 0; i<Z.size(); i++)
		{
			for(int j = i+1; j<Z.size(); j++)
			{
				for(int k = j+1; k<Z.size(); k++)
				{
					if(M[{Z[i], Z[j]}] && M[{Z[j], Z[k]}] && M[{Z[k], Z[i]}])
					{
						YES; return;
					}
				}
			}
		}
		if(adj[x].size()<4) continue;
		for(int i = 0; i<Z.size(); i++)
		{
			for(int j = i+1; j<Z.size(); j++)
			{
				if(M[{Z[i], Z[j]}]!=1) continue;
				int y = 0;
				for(ll th: adj[Z[i]])
				{
					if(th!=Z[j] && M[{th, x}]) {y++; break;}
				}
				for(ll th: adj[Z[j]])
				{
					if(th!=Z[i] && M[{th, x}]) {y++; break;}
				}
				if(y>=2) {YES; return;}
			}
		}
	}
	NO;
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

