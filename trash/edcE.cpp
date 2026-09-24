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

void solve()
{
	lli n, W;
	cin >> n >> W;
	vector<lli> w(n+1), v(n+1);
	vector<vll> dp(n+1, vll(100005, INT_MAX));
	for(int i=1; i<=n; i++) cin >> w[i] >> v[i];

	for(int i = 0; i<=n; i++) dp[i][0]=0;
	for(int i = 1; i<=n; i++)
	{
		for(int j = 100004; j>=0; j--)
		{
			dp[i][j]=dp[i-1][j];
			if(j>=v[i])
				dp[i][j]=min(dp[i][j], dp[i-1][j-v[i]]+w[i]);
		}
	}
	for(int i = 100004; i>=0; i--)
	{
		for(int j = 0; j<=n; j++)
		{
			if(dp[j][i]<=W)
			{
				cout<<i<<endl; return;
			}
		}
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

