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

lli a1an(lli G, int m)
{
	lli ans = 0;
	for(int i = 1; i<=m; i++)
	{
		for(int j = 1; j<=m; j++)
		{
			if(i==j) continue;
			if(gcd(G, gcd(i,j))==1 && gcd(G, i)!=1 && gcd(G, j)!=1) ans++;
		}
	}
	return ans;
}

lli binpow_mod(lli x, lli n, lli m){
    if (n == 0) return 1;
    lli res = binpow_mod(x, n / 2, m);
    if (n % 2)
        return ( res * res * x ) % m;
    return (res * res) % m;
}

vll Z(101,0);


lli nG(lli G, lli m, lli n)
{
	// KG - K(G-1)
	lli ans = binpow_mod(Z[G], n, 998244353)-binpow_mod(Z[G-1], n, 998244353);
	return (ans+998244353)%998244353;
}

void pc(lli m)
{
	for(int i = 0; i<=m; i++) Z[i]=0;
	for(int i = 1; i<=m; i++)
	{
		for(int j = i; j<=m; j++)
		{
			if(gcd(i,j)!=1) Z[i]++;
		}
	}
	// pL(Z);
}

void solve()
{
	lli n, m;
	cin >> n >> m;
	pc(m);
	lli KM=0, K1=0;
	lli ans = 0;
	for(int G = 2; G<=m; G++)
	{
		ans += (nG(G, m, n) * a1an(G, m))%998244353;
		ans%=998244353;
	}
	cerr<<a1an(6, 6)<<endl;
	cerr<<nG(6, 6, 3)<<endl;
	cout<<ans<<endl;
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

