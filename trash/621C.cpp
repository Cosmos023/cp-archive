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

using ld = long double;

void solve()
{
	int n, p;
	cin >> n >> p;
	vector<int> a(n);
	vector<ld> q(n);
	for(int i=0; i<n; i++)
	{
		int l, r; cin>>l>>r;
		q[i] = 1L*r/p - 1L*(l-1)/p;
		q[i] /= (r-l+1);
	}
	debug(q);
	ld ans = 0;
	for(int i=0; i<n; i++)
	{
		ans += 1-(1-q[i])*(1-q[(i-1+n)%n]);
		ans += 1-(1-q[i])*(1-q[(i+1)%n]);
	}
	cout<<fixed<<setprecision(15)<<ans*1000<<endl;
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

