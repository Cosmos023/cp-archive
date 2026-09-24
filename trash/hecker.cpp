#include <bits/stdc++.h>
using namespace std;
 
/* ================== FAST IO ================== */
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
 
/* ================== TYPEDEFS ================== */
#define ll long long
#define ull unsigned long long
#define ld long double
 
#define vi vector<ll>
#define vvi vector<vi>
#define pll pair<ll,ll>
 
/* ================== CONSTANTS ================== */
const ll inf = 3e11;
const ll mod = 998244353;
 
/* ================== MACROS ================== */
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define rrep(i,a,b) for(ll i = a; i >= b; i--)
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
/* ================== DEBUG ================== */
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << "\n"
#else
#define debug(x)
#endif
 
/* ================== UTILITY FUNCTIONS ================== */
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
 
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
 
ll binpow(ll a, ll b) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r; 
 
    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}
bool isPalin(ll x) {
    string s = to_string(x);
    return s == string(s.rbegin(), s.rend());
}
 
/* ================== SOLVE FUNCTION ================== */
void solve() {
    ll n;
    cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    ll ans=0;
    const ll INF=3e11;
    vector<vector<ll>> good(n+2,vector<ll>(n+2,INF));
    vi freq(n+2,0);
    rep(i,0,n){
        ll mn=a[i],mx=a[i];
        bool dup=false;
        freq[a[i]]++;
        good[a[i]][1]=min(good[a[i]][1],i);
        rep(j,i+1,n){
            freq[a[j]]++;
            if(freq[a[j]]>1) dup=true;
            mn=min(mn,a[j]);
            mx=max(mx,a[j]);
            ll len=j-i+1;
            if(!dup && mx-mn==len-1)
                good[mn][len]=min(good[mn][len],i);
        }
        rep(j,i,n) freq[a[j]]=0;
    }
    rep(mn,1,n+1) rep(l,1,n+1){
        if(mn+l>n) continue;
        ll s1=good[mn][l],s2=good[mn+l][l];
        if(s1==INF||s2==INF) continue;
        if(s2>=s1+l||s1>=s2+l) ans=max(ans,l);
    }
    cout<<ans<<"\n";
}
 
/* ================== MAIN ================== */
int main() {
    fastio();
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}