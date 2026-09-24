#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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

void solve()
{
	int n;
	cin >> n;
	vector<ll> a(2*n+1);
	vector<vi> P(n+1);
	for(int i=0; i<2*n; i++)
	{
		cin >> a[i+1];
		P[a[i+1]].push_back(i+1);
	}
	vll dp(2*n+1, 0);
	for(int i=1; i<=2*n; i++)
	{
		ll l = P[a[i]][0];
		ll r = P[a[i]][1];
		if(l==i) dp[i]=dp[i-1]+1;
		else dp[i] = max(dp[i-1]+1, dp[l-1] + (r-l+1)*(r-l+1));
	}
	cout<<dp[2*n]<<endl;
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

