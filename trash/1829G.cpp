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

vi lev(1000005, 0);
vector<lli> dp(1000005, 0);

lli L(lli n)
{
	lli m = lev[n];
 	m--;
 	// lli j = n-m*(m+1)/2;
 	// return m*(m-1)/2+j-1;
 	return n-m-1;
}

void p()
{
	lli z = 1;
	lli k = 1;
	while(k<=1000004)
	{
		for(int i = 1; i<=z; i++)
		{
			lev[k]=z;
			k++;
			if(k>=1000004) break;
		}
		z++;
	}
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 5;
 	for(lli i=3; i<=1000004; i++)
 	{
 		lli m = lev[i];
 		m--;
 		lli j = i-m*(m+1)/2;
 		if(j==1)
 		{
 			dp[i] = i*i + dp[m*(m-1)/2+1]; continue;
 		}
 		if(j==m+1)
 		{
 			dp[i] = i*i + dp[m*(m+1)/2]; continue;
 		}
 		dp[i] = i*i + dp[L(i)]+dp[L(i)+1]-dp[L(L(i)+1)];
 		
 	}
}

void solve()
{
	int n;
	cin >> n;
 	cout<<dp[n]<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	p();
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

