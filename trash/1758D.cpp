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
	ll n;
	cin >> n;
	vector<ll> a(n+1, 0);
	a[0]=1; a[1]=n+1;
	ll L = n*n-n-2;
	ll k = 2;
	for(int i = 2; i < n; i+=2)
	{
		if(i==n-1) a[i]=L;
	}
}
// n+1,1 -> n-1 remaining spaces, n^2 - (n+2)
// n-1 even, n(n-1)+2, (n-1)/2 pairs, 2, 
// [a, b]
// b-a+1=n
// (n-1)^2 = b*(b+1)/2 - a*(a+1)/2
// k^2(1+3+...+nth odd) = k^2 * n^2
// kn = k^2(2n-1 - 1)
// kn = kk(2n-2)
// k = n/(2n-2)
// ai = i*d+c
// a1 = d+c, an = nd+c
// an-a1 = d*(n-1), sum = cn + d*n(n+1)/2
// d*(n-1) = d*d*n*n*(n+1)(n+1)/4 
// 

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

