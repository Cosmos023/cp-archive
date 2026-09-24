#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ll = long long int;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "../util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int h, w;
	cin >> h >> w;
	vector<string> a(h);
	vector<vll> dp(h, vll(w, 0));
	for(int i=0; i<h; i++) cin >> a[i];
	dp[0][0]=1;
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < w; j++)
		{
			if(i==j && i==0) continue;
			if(a[i][j]=='#') continue;
			if(i==0)
			{
				dp[i][j] = dp[i][j-1];
				continue;
			}
			if(j==0)
			{
				dp[i][j] = dp[i-1][j];
				continue;
			}
			dp[i][j]=(dp[i][j-1]+dp[i-1][j])%((ll)1e9+7);
		}
	}
	cout<<dp[h-1][w-1]<<endl;
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

