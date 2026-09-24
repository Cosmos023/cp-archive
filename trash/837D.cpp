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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n,k;
	cin >> n >> k;
	vector<lli> a(n);
	vector<int> n2(n,0);
	vector<int> n5(n,0);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<n; i++) 
 	{
 		while(a[i]%2==0)
 		{
 			a[i]/=2; n2[i]++;
 		}
 		while(a[i]%5==0)
 		{
 			a[i]/=5; n5[i]++;
 		}
 	}
 	vector<vector<pii>> dp(n, vector<pii>(k));
 	for(int i=1; i<n; i++) 
 	{
 		for(int j=1; j<n; j++) 
 		{
 			// dp[i][j]=max()
 		}
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

