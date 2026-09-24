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

void solve()
{
	lli n, k;
	cin >> n >>k;
	vector<lli> J(31);
	for(int i=0; i<31; i++) J[i] = (1<<i)-1;
		// pL(J);
	// if(k>=n)
	// {
	// 	cout<<n<<endl; return;
	// }
	for(int i=30; i>=0; i--)
	{
		if(J[i]*k <= n)
		{
			lli ans = k*i;
			lli M = J[i]+1;
			lli z = (n-k*J[i])/M;
			// z = min(z, k);
			debug(z);
			ans += z;
			cout<<ans<<endl; return;
		} 
	}
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

