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
	int N,W;
	cin >> N >> W;
	vector<lli> w(N+1),v(N+1);
	for(int i=1; i<=N; i++) cin >> w[i] >> v[i];
	vector<vll> dp(N+1, vector<lli>(W+1, 0));
	for(int i=1; i<=N; i++)
	{
		dp[i]=dp[i-1];
		for(int j = W; j>=w[i]; j--)
		{
			dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
		}
	}
	cout<<*max_element(all(dp[N]))<<endl;
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

