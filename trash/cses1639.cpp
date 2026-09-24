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
	string A,B; cin>>A>>B;
	int n = A.size(), m = B.size();
	vector<vi> dp(n+1, vi(m+1, 0));
	// for(int i = 1; i<=n; i++)
	// {
	// 	for(int j = 1; j<=m; j++)
	// 	{
	// 		if(A[i-1]==B[j-1]) dp[i][j]=dp[i-1][j-1]+1;
	// 		else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	// 	}
	// }
 	// cout<<max(n,m)-dp[n][m]<<endl;
 	// debug(dp);
 	for(int i = 0; i<=n;i++) dp[i][m]=n-i;
 	for(int i = 0; i<=m;i++) dp[n][i]=m-i;
	for(int i = n-1; i>=0; i--)
	{
		for(int j = m-1; j>=0; j--)
		{
			if(A[i]==B[j]) dp[i][j]=dp[i+1][j+1];
			else
			{
				dp[i][j] = 1+min(min(dp[i+1][j+1],dp[i+1][j]), dp[i][j+1]);
			}
		}
	}
	cout<<dp[0][0]<<endl;
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

