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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

bool dfs(pair<int, int> n, auto& mp, map<pair<int,int>,bool>& visited, pii parent)
{
	visited[n]=true;
	for(pii& x: mp[n])
	{
		if(visited[x]) return true;
		dfs(x, mp, visited, n);
	}
	return false;
}

void solve()
{
	int n, m;
	cin >> n>>m;
	vector<vector<int>> adj(n);
	vector<string> st(n);
	for(int i = 0; i<m; i++)
	{
		int u,v; cin>>u>>v;
		adj[u-1].push_back(v-1);
		adj[v-1].push_back(u-1);
	}
	int w; cin>>w;
	for(int i = 0; i<n; i++)
	{
		cin>>st[i];
	}
	map<pair<int,int>, vector<pair<int,int>>> mp;
	for(int i = 0; i<n; i++)
	{
		for(int k = 0; k<w; k++)
		{
			if(st[i][k]=='x') continue;
			for(int& x:adj[i])
			{
				if(st[x][(k+1)%w]=='o') mp[{i, k}].push_back({x,(k+1)%w});
			}
		}
	}
	map<pair<int, int>,bool> visited;
	if(dfs({0,0}, mp, visited, {-1,-1}))
	{
		YES;
	}
	else NO;
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

