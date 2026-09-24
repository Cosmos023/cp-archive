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

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        // Random seed generated once per program execution
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve()
{
	int n;
	cin >> n;
	vector<pii> a(n);
	vector<int> p(n);
	for(int i=0; i<n; i++) cin >> a[i].first >> a[i].second >> p[i];
	si s;
	for(int i=0; i<n; i++) {s.insert(a[i].first); s.insert(a[i].second);}
	map<int,int> m;
	int t = 0;
	for(int c:s){ m[c]=t; t++; }

	unordered_map<int,vector<pll>, custom_hash> Z;
	for(int i=0; i<n; i++) {a[i].first = m[a[i].first]; a[i].second = m[a[i].second]; Z[a[i].second].push_back({a[i].first, p[i]});}

	vll dp(t, 0);
	for(int i = 0; i<Z[0].size(); i++)
	{
		dp[0] = max(dp[0], Z[0][i].second);
	}
	for(int i = 1; i<t; i++)
	{
		dp[i]=dp[i-1];
		for(int j = 0; j<Z[i].size(); j++)
		{
			if(Z[i][j].first>=1)
			dp[i] = max(dp[i], dp[Z[i][j].first-1] + Z[i][j].second);
			else
			dp[i] = max(dp[i], Z[i][j].second);
		}
		// debug(dp);
	}
	cout<<dp[t-1]<<endl;
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

