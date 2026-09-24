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


pair<lli,lli> check(lli k, lli S, vll a)
{
	lli J = 0;
	for(lli i = 0; i<a.size(); i++) a[i]=a[i]+(i+1)*k;
	sor(a);
	for(lli i = 0; i<k; i++)
	{
		J+=a[i];
	}
	return {J<=S, J};
}

void solve()
{
	lli n,S;
	cin >> n >> S;
	vector<lli> a(n);
	for(lli i=0; i<n; i++) cin >> a[i];
	lli l = 0,r = n;
	lli ans = 0;
	lli ans2 = 0;
	while(l<=r)
	{
		lli m = (l+r)/2;
		auto [y, J] = check(m, S, a);
		if(y)
		{
			ans = m;
			ans2 = J;
			l=m+1;
		}
		else r = m-1;
	}
	cout<<ans<<" "<<ans2<<endl;
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

