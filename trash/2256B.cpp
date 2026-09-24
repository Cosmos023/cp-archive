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
	string s; cin>>s;
	vector<vll> dp(n, vll(3, 0));
	for(int i=1; i<n; i++)
	{
		if(s[i]!='?')
		{
			if(s[i]=='1') 
			{
				dp[i][1]=dp[i-1][0];
				dp[i][2]=dp[i-1][1];
			}
			else
			{
				dp[i][0]=dp[i-1][0];
				dp[i][1]=dp[i-1][1];
			}
			continue;
		}
		dp[i][0] = dp[i-1][1]+dp[i-1][2];
		dp[i][1] = dp[i-1][0]+dp[i-1]
	}
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

