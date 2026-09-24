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
	vector<vi> a(n, vi(n));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	vector<vll> dp(n+1, vll(1<<n, 0));
	dp[0][0]=1;
	for(int i=1; i<=n; i++)
	{
		string s;
		for(int z=0;z<n-i;z++)s+="0";
		for(int z=0;z<i;z++)s+="1";
		debug(s);
		do {
			int Z = 0;
			for(int m = 0; m<n; m++) if(s[n-m-1]=='1') Z|=(1<<m);
			for(int j = 0; j<n; j++)
			{
				if(a[i-1][j]==1 && s[n-j-1]=='1') dp[i][Z]+=dp[i-1][Z^(1<<j)];
				dp[i][Z]%=(ll)(1e9+7);
			}
		} while(next_permutation(all(s)));
	}
	cout<<dp[n][(1<<n)-1]<<endl;
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

