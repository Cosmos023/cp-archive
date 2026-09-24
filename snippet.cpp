for(int i = 0; i<n; i++)
{
	for(int j = 0; j<m; j++)
	{

	}
}
//---
for(int i = 1; i<=n; i++)
{
	for(int j = 1; j<=m; j++)
	{

	}
}
//---
int n, a, b; cin>>n>>a>>b;
//---
int n;
cin >> n;
vector<lli> a(n), b(n);
for(int i=0; i<n; i++) cin >> a[i];
for(int i=0; i<n; i++) cin >> b[i];

//--
// number of occurences of index i (1-bases) in windows of size k
min(min(k, n-k+1), min(i, n-i+1))
{Count}(i) = min(n - k + 1, i) - max(1, i - k + 1) + 1
{Count}(i) = min({i, n - i + 1, k, n - k + 1})

//
floor(log2(x)) == 31-__builtin_clz(x) //log2(0)==undefined
//bit_width returns the min no. of bits that can be use to represent the number

// 64 total bits - leading zeros - 1 = index of highest set bit
int floor_log2(lli x) {
    if (x == 0) return -1;
    return 63 - __builtin_clzll(x); 
}
// Mathematically, ceil(log2(x)) == floor(log2(x - 1)) + 1
// 64 - leading zeros of (x-1) gives the exact bit width needed
int ceil_log2(lli x) {
    if (x <= 1) return 0;
    return 64 - __builtin_clzll(x - 1);
}

//---
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        // Random seed generated once per program execution
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
map<int,int,custom_hash> mp;


// Iterate over all distinct values of floor(n/k) in O(sqrt(n)) time
for (long long l = 1; l <= n; ) {
    long long q = n / l;
    long long r = n / q;   // largest k with quotient q

    // q is constant for k in [l, r]

    l = r + 1;
}