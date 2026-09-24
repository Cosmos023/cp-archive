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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	sor(a);
 	vi dp(n, 0);
 	dp[n-1]=0;
 	si L;
 	if(n>1 && a[n-1]!=a[n-2]) L.insert(a[n-1]);
 	for(int i=n-2; i>=0; i--)
 	{
 		dp[i] = ((a[i]==a[i+1] && !dp[i+1]));
 		if(L.upper_bound(a[i])!=L.end() && *L.upper_bound(a[i])<=a[i]+k) dp[i]=1;
 		if((i==0 || a[i]!=a[i-1]) && !dp[i]) L.insert(a[i]);
 	}
 	// pL(dp);
 	for(int i=0; i<n; i++)
 	{
 		if(i==0 || a[i]!=a[i-1])
 		{
 			if(dp[i])
 			{
 				YES; return;
 			}
 		}
 	}
 	NO;
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

