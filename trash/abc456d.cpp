#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ll = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	string s; cin>>s; s='!'+s;
	int n = s.size()-1;
	vector<vector<ll>> dp(n+1, vector<ll>(3,0));
	for(int i = 1; i<=n; i++)
	{
		if(s[i]=='a')
		{
			dp[i][0] = 1+dp[i-1][0] + dp[i-1][1] + dp[i-1][2];
			dp[i][1] = dp[i-1][1];
			dp[i][2] = dp[i-1][2];
		}
		if(s[i]=='b')
		{
			dp[i][1] = 1+dp[i-1][1] + dp[i-1][0] + dp[i-1][2];
			dp[i][2] = dp[i-1][2];
			dp[i][0] = dp[i-1][0];
		}
		if(s[i]=='c')
		{
			dp[i][2] = 1+dp[i-1][2] + dp[i-1][0] + dp[i-1][1];
			dp[i][1] = dp[i-1][1];
			dp[i][0] = dp[i-1][0];
		}
		for(ll& x:dp[i]) x%=998244353;
	// cout<<dp[i][0]+dp[i][1]+dp[i][2]<<endl;
	// pL(dp[i]);
	}
	cout<<(dp[n][0]+dp[n][1]+dp[n][2])%998244353<<endl;
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

