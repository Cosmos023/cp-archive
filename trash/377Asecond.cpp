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

int n, m, k;
int C = 0;
int F = 0;
void dfs(pii x, set<pii>& ans, vector<vi>& vis, map<pii,set<pii>>& adj)
{
	if(C==F-k) return;
	vis[x.first][x.second]=1;
	ans.insert(x);
	C++;
	for(auto ch:adj[x])
	{
		if(vis[ch.first][ch.second]==1) continue;
		dfs(ch,ans,vis,adj);
	}
}
 
void solve()
{
	cin >> n >> m >> k;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	map<pii,set<pii>> adj;
	vector<pii> delta = {{0,1},{1,0},{-1,0},{0,-1}};
	pii st;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]!='.') continue; F++;
			st={i,j};
			for(auto d:delta)
			{
				int nx = i+d.first, ny = j+d.second;
				if(0<=nx && nx<n && ny>=0 && ny<m) if(a[nx][ny]=='.')adj[{i,j}].insert({nx,ny});
			}
		}
	}
	set<pii> ans;
	vector<vector<int>> vis(n, vector<int>(m,0));
	dfs(st, ans, vis, adj);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]!='.') continue;
			if(ans.find({i,j})==ans.end()) a[i][j]='X';
		}
	}

	for(int i = 0; i<n; i++) cout<<a[i]<<endl;
	debug(ans);
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

