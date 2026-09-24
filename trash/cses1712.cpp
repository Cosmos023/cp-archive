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

ll expo(ll b, ll e, ll M)
{
	if(e==0) 	return 1LL;
	ll H = expo(b, e/2, M);
	if(e%2)
		return ((H*H)%M*b)%M;
	else return (H*H)%M;
}

void solve()
{
	ll a, b, c;
	cin >> a >> b >> c;
	ll M = 1e9+7;
	cout<<expo(a, expo(b, c, M-1), M)<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}

