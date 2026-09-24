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


// iiiiiiiiiiiii ????????????????
void solve()
{
	ll a, b, m, k;
	cin >> a >> b >> m >> k;
	if(gcd(a, b)!=1)
	{
		cout<<"-1\n"; return;
	}
	if(a<b) swap(a, b);
	if(k>=m)
	{
		cout<<b-1 + (a-1)/b<<endl;
	}
	else
	{
		ll ans = (a-1)/(m*b)*k; 
		a -= (a-1)/(m*b)*(m*b);
		ans += (b-1)/(1*m)*k;
		b -= (b-1)/(m*1)*(m*1);
		cout<<b-1 + ans + (a-1)/(b)<<endl;
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

