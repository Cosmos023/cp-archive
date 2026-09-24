#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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

const ll mod = 1e9+7;

void solve()
{
	ll n;
	cin >> n;
	vector<ll> a(100006);
	vector<ll> q(100006);
	q[1]=1; a[1]=0;
	ll i;
	for(i=2; i<=n+67; i++)
	{
		if(q[i-1] > n/(i/gcd(i, q[i-1])))
		{
			a[i]=n; break;
		}
		q[i] = q[i-1]*(i/gcd(i, q[i-1]));
		a[i] = n - n/q[i];
		debug(a[i], q[i], i);
	}
	ll ans = 0;
	for(ll j = 1; j < i; j++)
	{
		ans += (a[i]-a[j])%mod; ans%=mod;
	}
	cout<<(ans+a[i])%mod<<endl;
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

