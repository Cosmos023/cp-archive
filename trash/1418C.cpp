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
 	if(n==1)
 	{
 		cout<<(a[0]==1)<<"\n"; return;
 	}
 	vector<vector<int>> dp(n, vector<int>(2,-1));
 	dp[0][0] = (a[0]==1);
 	dp[1][0] = (a[0]==1)+(a[1]==1);
 	dp[1][1] = dp[0][0];
 	if(n>2)
 	{
 		dp[2][0]=dp[1][1]+(a[2]==1);
 		dp[2][1]=min(dp[0][0],dp[1][0]);
 	}
 	// for(int i = 0; i<n; i++) cout<<dp[i][0]<<" "; cout<<endl;
 	// for(int i = 0; i<n; i++) cout<<dp[i][1]<<" "; cout<<endl;
 	// cout<<endl;
 	for(int i=3; i<n; i++)
 	{
 		dp[i][0] = min(dp[i-2][1]+(a[i-1]==1)+(a[i]==1), dp[i-1][1]+(a[i]==1));
 		dp[i][1] = min(dp[i-2][0], dp[i-1][0]);
 	// for(int i = 0; i<n; i++) cout<<dp[i][0]<<" "; cout<<endl;
 	// for(int i = 0; i<n; i++) cout<<dp[i][1]<<" "; cout<<endl;
 	// cout<<endl;
 	}
 	cout<<min(dp[n-1][0],dp[n-1][1])<<"\n";
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

