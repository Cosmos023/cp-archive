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
	lli n, x;
	cin >> n>>x;
	vll dp(x+1, LLONG_MAX);
	dp[0]=0;
	vi c(n);
 	for(int i=0; i<n; i++) cin>>c[i];
 	for(int i=1; i<=x; i++)
 	{
 		for(lli m:c)
 		{
	 		if(i-m>=0 && dp[i-m]!=-1)
	 			dp[i]=min(dp[i], dp[i-m]+1);
 		}
 		if(dp[i]==LLONG_MAX)dp[i]=-1;
 	}
 	cout<<dp[x];
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

