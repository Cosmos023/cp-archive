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
	int n,k;
	cin >> n >> k;
	vector<ll> a(n+1); a[0]=-1;
	vector<ll> C(k+1);
	vector<ll> H(k+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<k; i++) cin >> C[i+1];
	for(int i=0; i<k; i++) cin >> H[i+1];
	vector<vll> dp(n+1, vll(n+1, LLONG_MAX));
	dp[0][0]=0;
	dp[0][1]=C[a[1]];
	dp[1][0]=C[a[1]];
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if(i==j) continue;
			if(i>j+1) dp[i][j] = dp[i-1][j] + ((a[i]!=a[i-1])?C[a[i]]:H[a[i]]);
			if(i==j+1)
			{
				for(int z = 0; z<=j-1; z++)
				{
					dp[i][j] = min(dp[i][j], dp[z][j]+((a[z]!=a[i])?C[a[i]]:H[a[i]]));
				}
			}
			if(j>i+1) dp[i][j] = dp[i][j-1] + ((a[j]!=a[j-1])?C[a[j]]:H[a[j]]);
			if(j==i+1)
			{
				for(int z = 0; z<=i-1; z++)
				{
					dp[i][j] = min(dp[i][j], dp[i][z]+((a[z]!=a[j])?C[a[j]]:H[a[j]]));
				}
			}
		}
	}
	ll ans = LLONG_MAX;
	for(int i = 0; i<=n; i++) ans=min(ans, min(dp[i][n], dp[n][i]));
	cout<<ans<<endl;
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