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


ll mpow(ll a,ll b,ll mod)
{
    if(mod==1) return 0;
    ll res=1; a%=mod;
    while(b)
    {
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
 
ll modinv(ll a,ll mod) { return mpow(a,mod-2,mod); }

vll F(1000006, 0);
void pc(ll n, ll p)
{
	F[0] = 1%p;
	F[1] = 1%p;
	F[2] = 2%p;
	for(int i = 3; i<=n; i++)
		F[i] = (F[i-1]+F[i-2])%p;
}

void solve()
{
	ll n, p;
	cin >> n >> p;
	pc(n, p);
	vll T(n+1, 0);
	if(n==1)
	{
		cout<<1%p<<endl; return;
	}
	T[n]=1;
	T[n-1] = (F[n-2] * modinv(2LL, p))%p;
	vll Sfktk(n+1, 0);
	vll Stk(n+1, 0);
	Sfktk[n]=(F[n]*T[n])%p;
	Sfktk[n-1] = ((F[n-1]*T[n-1])%p + Sfktk[n])%p;
	Stk[n]=T[n];
	Stk[n-1] = (T[n-1]+Stk[n])%p;
	for(int i=n-2; i>=1; i--)
	{
		// T[i] = (F[i-1] * modinv(2LL, p))%p*(T[i+1]) + ((F[n-1]+F[n-2]-F[i])%p * modinv(2LL, p))%p;
		T[i] = (Sfktk[i+1]-(Stk[i+1]*F[i])%p + p)%p;
		// T[i] = T[i] + F[n-1]+F[n-2]-F[i];
		T[i]%=p;
		T[i] *= modinv(2LL, p);
		T[i]%=p;

		Stk[i] = (T[i]+Stk[i+1])%p;

		Sfktk[i] = ((F[i]*T[i])%p + Sfktk[i+1])%p;
	}
	debug(Stk);
	debug(Sfktk);
	debug(T);
	debug(modinv(2, 11));
	cout<<T[1]<<endl;
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

