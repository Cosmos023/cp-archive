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

long double binpow(long double x, lli n) {
    if (n == 0) return 1;
    long double res = binpow(x, n / 2);
    if (n % 2)
        return res * res * x;
    return res * res;
}

void solve()
{
	lli m, n;
	cin >> m >> n;
	long double ans = 0;
	for(long double i=1; i<=m; i++)
	{
		ans += (binpow(i/m,n) - binpow((i-1)/m,n))*i;
	}
	cout<<fixed<<setprecision(15)<<ans<<endl;
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

