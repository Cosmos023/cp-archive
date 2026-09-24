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
	string x,y;
	cin >> x>>y;
	int n = x.size();
	lli dp[n][2];
	if(x[0]==y[0])
	{
		if(x[0]==0+'0')
		{
			dp[0][0]=0;
			dp[0][1]=INT_MAX;
		}
		else
		{
			dp[0][0]=INT_MAX;
			dp[0][1]=0;
		}
	}
	else
	{
		dp[0][0]=1;
		dp[0][1]=1;
	}

 	for(int i=1; i<n; i++)
 	{
 		dp[i][0] = min( (dp[i-1][0]+((x[i]==0+'0') ? ((y[i]==0+'0')?0: 1):(y[i]==0+'0')?1:2)),
 			(dp[i-1][1]+((x[i]==0+'0') ? ((y[i]==0+'0')?1: 2):(y[i]==0+'0')?0:1)) );
 		
 		dp[i][1] = min( (dp[i-1][0]+((x[i]==0+'0') ? ((y[i]==0+'0')?2: 1):(y[i]==0+'0')?1:0)),
 			(dp[i-1][1]+((x[i]==0+'0') ? ((y[i]==0+'0')?1: 0):(y[i]==0+'0')?2:1)) );
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

