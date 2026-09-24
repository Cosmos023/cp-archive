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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<string> a(n+2);
	vector<vector<lli>> dp(n+2, vector<lli>(n+2, 0));
	string s="";
 	for(int i=0; i<=n+1; i++) s+="*";
	a[0] = s;
	a[n+1] = s;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> s;
 		s = "*"+s+"*";
 		a[i] = s;
 	}
 	if(a[1][1]!='*')
 		dp[1][1] = 1;
 	for(int i = 1; i<=n; i++)
 	{
 		for(int j = 1; j<=n; j++)
 		{
 			if(i==1&&j==1) continue;
 			if(a[i][j]=='*') continue;
 			if(dp[i-1][j]!=0)
 				dp[i][j] += dp[i-1][j];
 			if(dp[i][j-1]!=0)
 				dp[i][j] += dp[i][j-1];
 			dp[i][j]%=(1000000007);
 		}
 	}
 	// for(int i = 1; i<=n; i++)
 	// {
 	// 	for(int j = 1; j<=n; j++)
 	// 	{
 	// 		cout<<dp[i][j]<<" ";
 	// 	}
 	// 	cout<<"\n";
 	// }
 	cout<<dp[n][n];
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

