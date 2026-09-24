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

void dfs(pii x, map<pii,int>& vis, set<pii>& ans,set<pii>& done, set<pii>& not_done,  map<pii,set<pii>>& adj)
{
	vis[x]=1;
	int y = 1;
	for(auto ch:adj[x])
	{
		if(vis[ch]) continue;
		if(done.find(ch)!=done.end()) continue;
		y=0;
		dfs(ch, vis, ans, done,not_done, adj);
	}
	if(y)
	{
		ans.insert(x);
		done.insert(x);
		not_done.erase(x);
	}
}

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	set<pii> ans; set<pii> done; set<pii> not_done;
	map<pii,set<pii>> adj;
	vector<pii> delta = {{0,1},{1,0},{-1,0},{0,-1}};
	pii st;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]!='.') continue;
			st={i,j};
			for(auto d:delta)
			{
				int nx = i+d.first, ny = j+d.second;
				if(0<=nx && nx<n && ny>=0 && ny<m) if(a[nx][ny]=='.')adj[{i,j}].insert({nx,ny});
			}
			not_done.insert({i,j});
		}
	}
	int z = 0;
	while(z<k)
	{
		map<pii,int> vis;
		set<pii> ans;
		dfs(*not_done.begin(), vis, ans,done,not_done, adj);
		debug(ans);
		for(pii c:ans)
		{
			if(z>=k) break;
			a[c.first][c.second]='X';
			z++;
		}
	}
	for(int i = 0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
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

