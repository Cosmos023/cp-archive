#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

lli mpow(lli a,lli b,lli mod)
{
    lli res=1; a%=mod;
    while(b)
    {
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
 
lli modinv(lli a,lli mod) { return mpow(a,mod-2,mod); }

int N = 200005;
vector<lli> fact(N),inv_fact(N);
void precompute_factorials(lli mod)
{
    fact[0] = 1;
    for(lli i=1;i<N;i++) fact[i] = fact[i-1] * i % mod;
    inv_fact[N-1] = modinv(fact[N-1],mod);
    for(lli i=N-2;i>=0;i--) inv_fact[i] = inv_fact[i+1] * (i+1) % mod;
}

lli ncr(lli n,lli r,lli mod)
{
    if(n<r || r<0) return 0;
    return fact[n] * inv_fact[r] % mod * inv_fact[n-r] % mod;
}

void solve()
{
	lli n, m, l, r;
	cin >> n>>m>>l>>r;
	lli ans = 0;
 	// for(lli i=l; i<=r; i++)
 	// {
 	// 	// for(lli ai = max(n-i,i-1)+1; ai<=m; ai++)
 	// 	// {
 	// 	// 	ans+=(ncr(ai-1,n-2, 998244353)*ncr(n-3, i-2, 998244353));
 	// 	// 	ans%=998244353;
 	// 	// }
 	// }
 	for(lli i=(n+1)/2+1; i<=r; i++)
 	{
 		ans+=(m-i+1)*(ncr(i-1,n-2, 998244353)*ncr(n-3, i-2, 998244353))%998244353;
 		ans%=998244353;
 	}
 	for(lli i=l; i<=(n+1)/2; i++)
 	{
 		ans+=(m-n+i)*(ncr(n-i,n-2, 998244353)*ncr(n-3, i-2, 998244353))%998244353;
 		ans%=998244353;
 	}
	cout<<((n-1)*ans)%998244353<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	precompute_factorials(998244353);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

