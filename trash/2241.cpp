#include <bits/stdc++.h>
#include <cmath>
#define integer int
#define int long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define nope cout << "NO" << endl;
#define yup cout << "YES" << endl;
#define FOR(v, n) for (int i = 0; i < (n); i++) cin >> (v)[i]
using namespace std;
 
 
template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
 
    //#ifndef ONLINE_JUDGE
        //cout << "Output: ";
    //
    //#endifi
 
 
int gcd(int a, int b) {
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while(b){
        int t = a%b;
        a = b;
        b = t;
    }
    return a;
}
 
 
/*ll fixpow(ll a, ll k, ll mod) {
    ll r = 1%mod;
    for(a %= mod; k; k >>= 1){
        if(k & 1) r = (__int128)r*a%mod;
        a = (__int128)a*a % mod;
    }
    return r;
}*/
 
const int N = 1e7;
 
vector<bool> isPrime(N + 1, true);
vector<int> primes;
 
void sieve() {
    isPrime[0] = isPrime[1] = false;
 
    for (long long i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
 
            if (i * i <= N) {
                for (long long j = i * i; j <= N; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }
}
 
int const MOD = 1e9+7;
long long modpow(long long a, long long e) {
    long long res = 1;
    while (e) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}
 
long long inv(long long x) {
    return modpow(x, MOD - 2);
}
 
long long nCk(int n, int k) {
    if (k < 0 || k > n) return 0;
 
    k = min(k, n - k);
 
    long long res = 1;
 
    for (int i = 1; i <= k; i++) {
        res = res * (n - k + i) % MOD;
        res = res * inv(i) % MOD;
    }
 
    return res;
}
    
set<int> power2;
void build(){
    int k = 2;
    while(k < 3*1e11){
        //jth power of 2
        power2.insert(k);
        k*=2;
    }
}
 
 
void solve() {
    
    int x,y;
    cin >> x >> y;
    if(x%y==0){
        cout << "YES" << endl;
        return;
    }
    
    cout << "NO" << endl;
}
 
bool isgood(int x){
    set<int> seen;
    
    while(x > 0){
        int dig = x%10;
        seen.insert(dig);
        x/=10;
    }
    
    if(seen.size() <= 2) return true;
    else return false;
}
 
void solve2() {
    int x;
    cin >> x;
    
    string s = "11";
    
    for(int i = 2; i <= 99; i++){
        int res = x * i;
        if(isgood(res)){
            cout << i << endl;
            return;
        }
    }
    
    for(int i = 0; i < 9; i++){
        string s = "1";
        int k = i;
        while(k--){
            s+='0';
        }
        s+='1';
        
        int res2 = stoll(s) * x;
        if(isgood(res2)){
            cout << s << endl;
            return;
        }
        
    }
}
 
void solve3(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char dig = s[0];
    int flip = 0;
    
    for(int i = 1; i < n; i++){
        if(dig != s[i] && flip == 0){
            flip++;
            dig = s[i];
            continue;
        }
        else if(dig != s[i] && flip > 0){
            cout << 1 << endl;
            return;
        }
    }
    
    if(flip == 0){
        cout << 1 << endl;
        return;
    }
    else{
        cout << 2 << endl;
        return;
    }
    
}
 
void solve4(){
    //process each i individually as i = l
    //this means increase operation
    //if b[i] > a[i], we can always just do it
    //if a[i] > b[i], check if the difference
    //is less than the max seen so far, otherwise imposs
    
    
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    FOR(a,n);
    FOR(b,n);
    int mx = 0;
    
    for(int i = 0; i < n; i++){
        if(i == 0 && a[i] > b[i]){
            cout << "NO" << endl;
            return;
        }
        
        if(a[i] > b[i]){
            int diff = a[i] - b[i];
            if(diff < mx){
                cout << "NO" << endl;
                return;
            }
            mx = max(mx, a[i] - b[i]);
            continue;
        }
        
        mx = max(mx, b[i]-a[i]);
    }
    
    //also there cannot be more dec operations than inc
    
    int inc = 0;
    int dec = 0;
    for(int i =0; i < n; i++){
        if(b[i] > a[i]) inc++;
        else if(a[i] > b[i]) dec++;
    }
    
    if(dec > inc){
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    
    
}
 
 
 
 
signed main() {
      auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //build();
    //sieve();
    int t = 1;  
    cin >> t;
    while(t--) solve2();
  
  // program here

  auto end = chrono::high_resolution_clock::now();

  cerr << chrono::duration<double>(end - start).count() << '\n';

    return 0;
}
