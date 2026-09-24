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
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vi> ad(n+1);
	for(int i=0; i<m; i++)
	{
		int x,y; cin>>x>>y;
		ad[x].push_back(y);
		ad[y].push_back(x);
	}
	for(int i=1; i<=n; i++) sor(ad[i]);
	lli ans = 0;
	vll dp(n+1,0);
	int L = 0;
	for(int i=1; i<=n; i++)
	{
		auto k = lower_bound(all(ad[i]),i);
		if(ad[i].size()==0 || k==ad[i].begin()) dp[i]=i-L;
		else
		{
			L = max(L, *--k);
			dp[i]=i-L;
		}
	}
	ans = accumulate(all(dp),0LL);
	cout<<ans<<endl;
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

