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