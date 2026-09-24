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
	ll n, q;
	cin >> n >> q;
	string s; cin>>s; s='!'+s;
	vll n1(n+1, 0);
	vll n0(n+1, 0);
	vll z(n+1, 0);
	for(int i = 1; i<=n; i++)
	{
		n1[i] = n1[i-1]+(s[i]=='1');
		n0[i] = n0[i-1]+(s[i]=='0');
		z[i] = z[i-1]+(s[i]!=s[i-1]);
	}
	while(q--)
	{
		ll l, r; cin>>l>>r;
		ll N1 = n1[r]-n1[l-1];		
		ll N0 = n0[r]-n0[l-1];
		ll Z = z[r]-z[l]+1-(s[r]==s[l]);
		if(N1<N0) swap(N1,N0);
		ll ans = 0;
		if(Z==0)
		{
			ans++; N1 = r-l+1; N0=1; Z=2;
		}
		if(N1<=Z && N0<=Z)
		{
			ans+=2*Z-N1-N0;
		}
		else
		{
			ll k = N1-N0;
			debug(k);
			N0=N1; Z+=2*k; ans+=2*k;
			ans+=3*N1-N0-2*Z;
		}
		cout<<ans<<endl;
	}
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

