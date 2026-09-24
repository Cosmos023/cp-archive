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
        return ( res * res * x ) % m;
    return (res * res) % m;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> p(n),q(n);
	for(int i=0; i<n; i++) cin >> p[i];
	for(int i=0; i<n; i++) cin >> q[i];
	vll r(n);
	int mp=0, mq=0;
	for(int i = 0; i<n; i++)
	{
		if(p[mp]<p[i]) mp=i;
		if(q[mq]<q[i]) mq=i;
		if(p[mp]>q[mq])
			r[i] = binpow_mod(2, p[mp], 998244353) + binpow_mod(2, q[i-mp], 998244353);
		else if(p[mp]<q[mq])
			r[i] = binpow_mod(2, p[i-mq], 998244353) + binpow_mod(2, q[mq], 998244353);
		else
		{
			if(p[i-mq]>q[i-mp])
				r[i] = binpow_mod(2, p[i-mq], 998244353) + binpow_mod(2, q[mq], 998244353);
			else
				r[i] = binpow_mod(2, p[mp], 998244353) + binpow_mod(2, q[i-mp], 998244353);
		}
		

		r[i]%=998244353;
		debug(mp, mq);
	}
	pL(r);
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

