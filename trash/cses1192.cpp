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

void dfs(int i, int j, int n, int m, vector<vector<bool>>& vis)
{
	if(vis[i][j])
		return;
	vis[i][j] = 1;
	if(i>0) dfs(i-1, j, n,m,vis);
	if(i<n-1) dfs(i+1, j, n,m,vis);
	if(j>0) dfs(i, j-1, n,m,vis);
	if(j<m-1) dfs(i, j+1, n,m,vis);
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(a[i][j]=='#') vis[i][j]=1;
		}
	}
	int ans = 0;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(!vis[i][j])
			{
				ans++;
				dfs(i, j, n, m, vis);
			}
		}
	}
	cout<<ans<<endl;
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

