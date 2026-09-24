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

lli binpow_mod(lli x, lli n, lli m){
    if (n == 0) return 1;
    lli res = binpow_mod(x, n / 2, m);
    if (n % 2)
        return ( (res * res)%m * x ) % m;
    return (res * res) % m;
}
const lli M = 1e9+7;
void solve()
{
	lli n,m,k;
	cin >> n>>m>>k;
	lli ans = 0;
	if(k<n)
	{
		if(k==1) ans = binpow_mod(m,n,M);
		else if(k%2) ans = m*m;
		else ans = m;
	}
	else if(k==n)
	{
		ans = binpow_mod(m,(n+1)/2, M);
	}
	else ans = binpow_mod(m,n,M);
	cout<<ans<<endl;
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

