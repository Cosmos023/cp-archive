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

using ld = long double;

ld binpow(ld x, lli n) {
    if (n == 0) return 1;
    ld res = binpow(x, n / 2);
    if (n % 2)
        return res * res * x;
    return res * res;
}


void solve()
{
	lli n, t; ld p;
	cin >> n >> p >> t;
	vector<vector<ld>> dp(n+1, vector<ld>(t+1, 0));
	dp[0][0]=1;
	for(int T = 1; T<=t; T++) dp[0][T]=(1-p)*dp[0][T-1];
	for(int X = 1; X<=n; X++)
	{
		for(int T = 1; T<=t; T++)
		{
			dp[X][T] = p*dp[X-1][T-1] + (1.0-p)*dp[X][T-1];
			if(X==n)
				dp[X][T] = p*dp[X-1][T-1] + (1.0)*dp[X][T-1];
		}
	}
	debug(dp);
	ld ans = 0;
	for(int X = 1; X<=n; X++) ans+= dp[X][t]*X;
	cout<<fixed<<setprecision(15)<<ans<<endl;
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

