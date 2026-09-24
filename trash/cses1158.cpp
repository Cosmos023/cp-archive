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
	int n, x;
	cin >> n >> x;
	vector<int> w(n),v(n);
 	for(int i=0; i<n; i++) cin >> w[i];
 	for(int i=0; i<n; i++) cin >> v[i];
 	vector<vi> dp(n, vi(x+1, 0));
 	dp[0][w[0]]=v[0];
 	for(int i = 1; i<n; i++)
 	{
 		for(int j = 1; j<=x; j++)
 		{
 			if(j>=w[i])
 				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
 			else
 				dp[i][j] = dp[i-1][j];
 		}
 	}
 	cout<<*max_element(all(dp[n-1]))<<endl;
 	debug(dp);
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

