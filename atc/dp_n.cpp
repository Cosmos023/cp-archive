#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
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
	int n;
	cin >> n;
	vector<ll> a(n+1,0), p(n+1,0);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<n; i++) p[i+1]=p[i]+a[i+1];
	vector<vll> dp(n+1, vll(n+1, LLONG_MAX));
	for(int l = 1; l<=n; l++)
	{
		for(int i = 1; i<=n-l+1; i++)
		{
			if(l==1){dp[i][i]=0; continue;}
			int j = i+l-1;
			for(int k = i; k<j; k++)
			{
				dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]+p[j]-p[i-1]);
			}
		}
	}
	debug(dp[1][2]);
	cout<<dp[1][n]<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

