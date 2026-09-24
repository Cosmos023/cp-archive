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

lli dp[2003][2003];

void solve()
{
	int n,k;
	cin >> n>>k;
	// vector<int> a(n);
 	for(int i=0; i<=k; i++)
 	{
 		dp[1][i]=1;
 	}
 	for(int i=0; i<=n; i++)
 	{
 		dp[i][1]=i;
 	}
 	for(int i=2; i<=n; i++)
 	{
 		for(int j = 2; j<=k; j++)
 		{
 			dp[i][j]=0;
 			dp[i][j] += dp[i][j-1]*(i/j);
 		}
 	}

 	for(int i=1; i<=n; i++)
 	{
 		for(int j = 1; j<=k; j++)
 		{
 			cout << dp[i][j] <<" ";
 		}
 		cout<<endl;
 	}
 	cout<<dp[n][k];
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

