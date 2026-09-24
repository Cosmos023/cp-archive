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
	vector<int> h1(n+1), h2(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> h1[i];
 	}
 	for(int i=1; i<=n; i++) cin >> h2[i];
 	lli dp[n+1][3];
 	dp[1][0]=h1[1];
 	dp[1][1]=h2[1];
 	dp[1][2]=0;
 	for(int i=2; i<=n; i++)
 	{
 		dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + h1[i];
 		dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + h2[i];
 		dp[i][2] = max(dp[i-1][0],dp[i-1][1]);
 	}
 	cout<<max(dp[n][0],max(dp[n][1], dp[n][2]))<<"\n";
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

