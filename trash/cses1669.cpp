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

vector<int> adj[200005];
bool visited[200005];
vi parent(200005, -1);

pii dfs(int v, int p)
{
	debug(v, p, adj[v]);
	visited[v]=1;
	parent[v]=p;
	pii k = {-1,-1};
	for(int ch:adj[v])
	{
		if(ch!=p)
		{
			pii Z;
			if(visited[ch])
				return {v, ch};
			else
				Z = dfs(ch, v);
			if(Z!=k) k=Z;
		}
	}
	return k;
}

void solve()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		int v, u;
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	for(int i = 1; i <= n; i++)
	{
		if(!visited[i]) 
		{
			pii ans = dfs(i, -1);
			int start = ans.first, end = ans.second;
			// dfs(i,-1);
			debug(ans);
			// pL1(parent, n);
			if(ans!=make_pair(-1,-1))
			{
				vi an;
				an.push_back(start);
				while(end!=start)
				{
					an.push_back(end);
					end = parent[end];
				}
				an.push_back(start);
				cout<<an.size()<<endl;
				pL(an);
				return;
			}
		}
	}
	cout<<"IMPOSSIBLE\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

