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

void dijk(int s, vll& d, vector<vector<pair<int, lli>>>& adj, vi& horse)
{
	d[s]=0;
	set<pair<pair<lli, int>, int>> Q;
	Q.insert({{0,s},0});
	while(!Q.empty())
	{
		int v = (*Q.begin()).first.second;
		int h = (*Q.begin()).second;
		Q.erase(Q.begin());
		for(auto& [ch,w]:adj[v])
		{
			if(!h)
			{
				if(d[ch]>w+d[v])
				{
					Q.erase({{d[ch],ch},0});
					d[ch]=w+d[v];
					if(horse[ch])
					{
						Q.insert({{d[ch],ch},0});
					}
					else
					{
						Q.insert({{d[ch],ch},1});
					}
				}
			}
			else
			{
				if(d[ch]>w/2+d[v])
				{
					Q.erase({{d[ch],ch},1});
					Q.erase({{d[ch],ch},0});
					d[ch]=w/2+d[v];
					Q.insert({{d[ch],ch},1});
				}
			}
		}
	}
}

void solve()
{
	int n,m,h;
	cin >> n >> m >> h;
	vi horse(n+1,0);
	vector<vector<pair<int, lli>>> adj(n+1);
	for(int i=0; i<h; i++) 
	{
		int x; cin >> x;
		horse[x]=1;
	}
	for(int i=0; i<m; i++) 
	{
		lli u,v,w; cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	vll d1(n+1, LLONG_MAX);
	dijk(7, d1, adj, horse); debug(d1);
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

