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
	ll n, p;
	cin >> n >> p;
	vector<ll> l(n), r(l);
	vector<ld> P(n);
	for(int i=0; i<n; i++) cin >> l[i] >> r[i];
	for(int i=0; i<n; i++) 
	{
		P[i] = 1.0L*(r[i]/p - (l[i]-1)/p);
		P[i]/=(r[i]-l[i]+1);
	}
	debug(P);
	ld ans = 0;
	for(int i=0; i<n; i++)
	{
		ans+=2000*(1-(1-P[i])*(1-P[(i+1)%n]));
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

