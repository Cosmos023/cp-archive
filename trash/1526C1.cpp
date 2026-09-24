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
	int n;
	cin >> n;
	vector<ll> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	vector<vll> dp(n+1, vll(n+1, -1));
	for(int i = 0; i<=n; i++) dp[i][0] = 0;
	// vll Z(n+1, -1); Z[0]=0;
	for(int i = 1; i <= n; i++)
	{
		for(int x = 1; x<=i; x++)	
		{
			dp[i][x]=dp[i-1][x];
			if(dp[i-1][x-1]!=-1) dp[i][x] = max(dp[i-1][x], a[i]+dp[i-1][x-1]);
			if(dp[i][x]<0) dp[i][x]=-1;
			// debug(i, x, Z[x-1], a[i]);
			// if(dp[i][x]!=-1) Z[x] = max(Z[x], dp[i][x]);
		}
		// for(int j = 1; j<=n; j++) if(dp[i-1][j]!=-1) Z[j] = max(Z[j], dp[i-1][j]);
	}
	// debug(Z);
	debug(dp);
	int ans = 0;
	for(int i = 0; i <= n; i++)
	{
		if(dp[n][i]!=-1) ans = max(ans, i);
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

