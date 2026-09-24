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

const ll mod = 1e8;
void solve()
{
	ll N1, N2, K1, K2; cin>>N1>>N2>>K1>>K2;
	ll dp[N1+1][N2+1][max(K1, K2)+1][2] = {};
	dp[0][0][0][0]=dp[0][0][0][1]=1;
	for(ll n1 = 1; n1<=N1; n1++)
	{
		for(ll k = 1; k<=K1; k++)
			dp[n1][0][k][0] = dp[n1-1][0][k-1][0];
	}
	for(ll n2 = 1; n2<=N2; n2++) 
	{
		for(ll k = 1; k<=K2; k++)
			dp[0][n2][k][1] = dp[0][n2-1][k-1][1];
	}
	for(ll n1 = 1; n1<=N1; n1++)
	{
		for(ll n2 = 1; n2<=N2; n2++)
		{
			for(ll i = 1; i<=min(K2,n2); i++)
			{
				dp[n1][n2][1][0] += dp[n1-1][n2][i][1];
				dp[n1][n2][1][0]%=mod;
			}
			for(ll i = 1; i<=min(K1,n1); i++)
			{
				dp[n1][n2][1][1] += dp[n1][n2-1][i][0];
				dp[n1][n2][1][1]%=mod;
			}
			for(ll k = 2; k<=max(K1,K2); k++)
			{
				if(k<=K1)
				{
					dp[n1][n2][k][0] = dp[n1-1][n2][k-1][0];
				}
				if(k<=K2)
				{
					dp[n1][n2][k][1] = dp[n1][n2-1][k-1][1];
				}
			}
		}
	}
	ll ans = 0;
	for(ll i = 0; i<=max(K1, K2); i++)
	{
		ans += dp[N1][N2][i][0]+dp[N1][N2][i][1];
		ans%=mod;
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

