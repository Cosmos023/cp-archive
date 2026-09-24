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
    if(m==1) return 0;
    if (n == 0) return 1;
    x%=m;
    lli res = binpow_mod(x, n / 2, m);
    if (n % 2)
        return ( (res * res)%m * x ) % m;
    return (res * res) % m;
}

void solve()
{
	lli n,m,r,c;
	cin >> n>>m>>r>>c;
	cout<<binpow_mod(2, m*(r-1)+n*(c-1)-(r-1)*(c-1), 998244353)<<endl;
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

