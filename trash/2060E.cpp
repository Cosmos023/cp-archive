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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void dfs(int v, int g, vi& gng, vector<vi>& adj)
{
	if(gng[v]) return;
	gng[v]=g;
	for(int ch:adj[v])
	{
		dfs(ch,g,gng,adj);
	}
}
void dfs2(int v, vi& vis, vector<vi>& adj)
{
	if(vis[v]) return;
	vis[v]=1;
	for(int ch:adj[v])
	{
		dfs2(ch, vis, adj);
	}
}

void solve()
{
	int n, m1, m2;
	cin >> n >> m1 >> m2;
	vector<vi> adjF(n+1);
	vector<vi> adjG(n+1);
 	for(int i=0; i<m1; i++)
 	{
 		int u,v; cin>>u>>v;
 		adjF[u].push_back(v);
 		adjF[v].push_back(u);
 	}
 	for(int i=0; i<m2; i++)
 	{
 		int u,v; cin>>u>>v;
 		adjG[u].push_back(v);
 		adjG[v].push_back(u);
 	}
 	vi gng(n+1, 0);
 	for(int i = 1; i<=n; i++)
 	{
 		if(gng[i]==0)
 		{
 			dfs(i, i, gng, adjG);
 		}
 	}
 	// pL(gng);
 	int ans = 0;
 	for(int i = 1; i<=n; i++)
 	{
 		vi NEW;
 		for(int j=0; j<adjF[i].size(); j++)
 		{
 			if(gng[i]==gng[adjF[i][j]]) NEW.push_back(adjF[i][j]);
 			else ans++;
 		}
 		adjF[i]=NEW;
 	}
 	ans/=2;
 	vi c(n+1,0);
 	vi vis(n+1, 0);
 	for(int i = 1; i<=n; i++)
 	{
 		if(!vis[i])
 		{
 			c[gng[i]]++;
 			dfs2(i, vis, adjF);
 		}
 	}
 	for(int i = 1; i<=n; i++)
 	{
 		ans+=max(0, c[i]-1);
 	}
 	cout<<ans<<"\n";
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

