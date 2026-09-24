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

template<ll MOD>
struct modint {
    ll v;
    modint(long long x = 0) {
        x %= MOD;
        if (x < 0) x += MOD;
        v = x;
    }
    modint& operator+=(const modint& other) {
        v += other.v;
        if (v >= MOD) v -= MOD;
        return *this;
    }
    modint& operator-=(const modint& other) {
        v -= other.v;
        if (v < 0) v += MOD;
        return *this;
    }
    modint& operator*=(const modint& other) {
        v = (long long)v * other.v % MOD;
        return *this;
    }
    modint operator+(const modint& other) const {
        return modint(*this) += other;
    }
    modint operator-(const modint& other) const {
        return modint(*this) -= other;
    }
    modint operator*(const modint& other) const {
        return modint(*this) *= other;
    }
    modint pow(long long e) const {
        modint res = 1;
        modint a = *this;
        while(e) {
            if(e & 1) res *= a;
            a *= a;
            e >>= 1;
        }
        return res;
    }
    modint inv() const {
        return pow(MOD - 2);
    }
    modint& operator/=(const modint& other) {
        return *this *= other.inv();
    }
    modint operator/(const modint& other) const {
        return modint(*this) /= other;
    }
    ll val() const {
        return v;
    }
    friend ostream& operator<<(ostream& os, const modint& x) {
        return os << x.v;
    }
};

using mint = modint<998244353>;

const ll MAXN = 5e5+5;
const ll MOD = 998244353;
vector<mint> T(4*MAXN);
vector<mint> lazyB(4*MAXN, 1);
vector<mint> lazyC(4*MAXN, 0);

void build(int v, int st, int en, vll& a)
{
	lazyB[v]=1;
	lazyC[v]=0;
	if(st==en)
	{
		T[v]=a[st]; return;
	}
	int m = (st+en)/2;
	build(2*v, st, m, a);
	build(2*v+1, m+1, en, a);
	T[v] = T[2*v]+T[2*v+1];
}

void push(int v, int st, int en)
{
	if(st!=en)
	{
		lazyB[2*v] *= lazyB[v];
		lazyB[2*v+1] *= lazyB[v];
		lazyC[2*v] = lazyC[v] + lazyC[2*v]*lazyB[v];
		lazyC[2*v+1] = lazyC[v] + lazyC[2*v+1]*lazyB[v];
		int m = (st+en)/2;
		T[2*v] = lazyB[v]*T[2*v] + lazyC[v]*(m-st+1);
		T[2*v+1] = lazyB[v]*T[2*v+1] + lazyC[v]*(en-m);
	}
	lazyB[v]=1;
	lazyC[v]=0;
}

void update(int v, int st, int en, int L, int R, ll b, ll c)
{
	if(R<st || L>en) return;
	push(v, st, en);
	if(L<=st && en<=R)
	{
		T[v] *= b;
		T[v] += (en-st+1)*c;
		if(st!=en) {lazyC[v] = c; lazyB[v] = b;}
		return;
	}
	int m = (st+en)/2;
	update(2*v, st, m, L, R, b, c);
	update(2*v+1, m+1, en, L, R, b, c);
	T[v] = T[2*v]+T[2*v+1];
}

mint query(int v, int st, int en, int L, int R)
{
	if(R<st || L>en) return 0;
	push(v, st, en);
	if(L<=st && en<=R) return T[v];
	int m = (st+en)/2;
	return query(2*v, st, m, L, R) + query(2*v+1, m+1, en, L, R);
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vll a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	build(1, 1, n, a);
	while(m--)
	{
		int l, r, x; cin>>l>>r>>x;
		mint z = r-l+1;
		update(1, 1, n, l, r, ((z-1)/z).val(), (mint(x)/z).val());
	}
	for(int i = 1; i<=n; i++)
	{
		cout<<query(1, 1, n, i, i)<<" ";
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
