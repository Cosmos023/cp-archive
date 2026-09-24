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
	int n,c;
	cin >> n>>c;
	vector<int> a(n+1);
	vector<int> b(n+1);
 	for(int i=1; i<n; i++)	cin >> a[i];
 	for(int i=1; i<n; i++) cin>>b[i];
 	int dp[n+1][2];
 	dp[1][1]=10000;
 	dp[1][0]=0;
 	for(int i = 2; i<=n; i++)
 	{
 		dp[i][0] = min(dp[i-1][0]+a[i-1],dp[i-1][1]+a[i-1]);
 		dp[i][1] = min(dp[i-1][0]+c+b[i-1],dp[i-1][1]+b[i-1]);
 	}
 	for(int i = 1; i<=n; i++)
 	{
 		cout<<min(dp[i][0], dp[i][1])<<" ";
 	}
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

