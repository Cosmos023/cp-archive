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
	string s,t; cin>>s>>t;
	int n = s.size(), m=t.size();
	vector<vi> dp(n+1, vi(m+1, 0));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(s[i-1]==t[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	int x=n, y=m;
	string ans = "";
	while(x!=0 && y!=0)
	{
		if(s[x-1]!=t[y-1])
		{
			if(dp[x][y]==dp[x][y-1])y--;
			else x--;
			continue;
		}
		ans+=s[x-1];
		x--; y--;
	}
	reverse(all(ans));
	cout<<ans<<endl;
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

