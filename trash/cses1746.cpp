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

const lli M = 1e9+7;

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<lli> x(n+1,0);
 	for(int i=0; i<n; i++) cin >> x[i+1];
	vector<vll> dp(n+1, vll(m+1, 0));
 	if(x[1]==0)
 	{
 		for(int i=1; i<=m; i++) dp[1][i]=1;
 	}
 	else
 		dp[1][x[1]]=1;
	for(int i=2; i<=n; i++)
	{
		if(x[i]==0)
		{
			for(int j = 1; j<=m; j++)
			{
				dp[i][j]+=dp[i-1][j];
				if(j!=1) dp[i][j]+=dp[i-1][j-1];
				if(j!=m) dp[i][j]+=dp[i-1][j+1];
			}
		}
		else
		{
			dp[i][x[i]]+=dp[i-1][x[i]];
			if(x[i]!=1) dp[i][x[i]]+=dp[i-1][x[i]-1];
			if(x[i]!=m) dp[i][x[i]]+=dp[i-1][x[i]+1];
		}
		for(int j = 1; j<=m; j++) dp[i][j]%=M;
	}
	cout<<accumulate(all(dp[n]), 0LL)%M<<endl;
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
