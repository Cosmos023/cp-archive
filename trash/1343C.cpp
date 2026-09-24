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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	vector<vector<lli>> dp(n, vector<lli>(2, 0));
 	for(int i = 0; i<n; i++)
 	{
 		dp[i][0]=INT_MAX;
 		dp[i][1]=INT_MIN;
 	}
 	lli ln=0,lp=0;
 	if(a[0]>0)
 	{
 		dp[0][0]=a[0];
 		ln=a[0];
 		lp=INT_MIN;
 	}
 	else
 	{
 		dp[0][1]=a[0];
 		lp = a[0];
 		ln=INT_MIN;
 	}
 	for(int i=1; i<n; i++)
 	{
 		if(a[i]>0)
 		{
 			dp[i][0] = max(dp[i-1][0],dp[i-1][1]+a[i]);
 			dp[i][1]=dp[i-1][1];
 		}
 		else
 		{
 			dp[i][1] = max(dp[i-1][1],dp[i-1][0]+a[i]);
 			dp[i][0]=dp[i-1][0];
 		}
 	}
 	for(int i = 0; i<n; i++)
 		cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";
 	if(a[n-1]>0)
 		cout<<dp[n-1][0]<<"\n";
	else
 		cout<<dp[n-1][1]<<"\n";
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

