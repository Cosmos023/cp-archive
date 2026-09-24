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
	ll n, k;
	cin >> n >> k;
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	vector<vll> dp(n+1,vll(k+1, 0));
	dp[0][0]=1;
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=k; j++) dp[i-1][j]+=dp[i-1][j-1];
		for(int j = k; j>=0; j--)
		{
			dp[i][j] = dp[i-1][j];
			if(j>a[i]) dp[i][j]-=dp[i-1][j-a[i]-1];
			dp[i][j]%=(ll)(1e9+7);
		}
	}
	cout<<dp[n][k]<<endl;
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

