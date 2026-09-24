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
	int n,m;
	cin >> n>>m;
	if(m>n)swap(m,n);
	vector<int> a(n+1), b(m+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<m; i++) cin >> b[i+1];
	vector<vi> dp(n+1, vi(m+1, 0));
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=m; j++)
		{
			if(a[i]==b[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
		// debug(dp);
	}
	cout<<dp[n][m]<<endl;
	int y = n, x=m;
	vi ans;
	while(ans.size()!=dp[n][m])
	{
		if(dp[y][x]==dp[y-1][x]) y--;
		else if(dp[y][x]==dp[y][x-1]) x--;
		else {ans.push_back(a[y]); x--; y--;}
	}
	reverse(all(ans));
	pL(ans);
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

