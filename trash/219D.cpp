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

int n;
vector<vi> adj(200005);
set<pii> S;
vi df1(200005, -1);
vi rf1(200005, -1);

int dfs(int x, int D, int R)
{
	df1[x]=D; rf1[x]=R; debug(x, adj[x]);
	int y = 0;
	for(int ch:adj[x])
	{
		if(df1[ch]!=-1) continue;
		y += (S.find({x, ch})==S.end()) + dfs(ch, D+1, R+(S.find({x, ch})==S.end()));
	}
	return y;
}

void solve()
{
	cin >> n;
	for(int i=0; i<n-1; i++)
	{
		int s,t; cin>>s>>t;
		S.insert({s,t});
		adj[s].push_back(t);
		adj[t].push_back(s);
	}
	int R = dfs(1, 0, 0);
	int ans = R;
	for(int i = 2; i <= n; i++)
	{
		ans = min(ans, R - 2*rf1[i]+df1[i]);
	}
	cout<<ans<<endl;
	vi an; if(R==ans) an.push_back(1);
	for(int i = 2; i <= n; i++)
	{
		if(ans == R - 2*rf1[i]+df1[i]) an.push_back(i);
	}
	pL(an);
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

