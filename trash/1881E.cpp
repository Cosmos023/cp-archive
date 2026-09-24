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
	int n;
	cin >> n;
	vector<lli> a(n+1), dp1(n+1,INT_MAX), dp0(n+1, INT_MAX);
	for(int i=1; i<=n; i++) cin >> a[i];
	dp1[n]=1;
	for(int i=n-1; i>=1; i--)
	{
		dp1[i]=1+min(dp1[i+1],dp0[i+1]);
		if(i+a[i]+1<=n)
			dp0[i] = min(dp1[i+a[i]+1],dp0[i+a[i]+1]);
		if(i+a[i]+1==n+1) dp0[i]=0;
	}
	cout<<min(dp0[1],dp1[1])<<endl;
	debug(dp1);
	debug(dp0);
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
