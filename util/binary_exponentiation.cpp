#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;


/*
const int M = 1e9 + 7;
int binExp(int a, int b)
{
    if(b==0) return 1;
    int res = binExpRecursion(a, b/2);
    if(b&1) return (a * (1LL * res * res % M)) % M;
    else return (1LL * res * res) % M;
}
*/


lli binpow(lli x, lli n) {
    if (n == 0) return 1;
    lli res = binpow(x, n / 2);
    if (n % 2)
        return res * res * x;
    return res * res;
}

lli binpow_mod(lli x, lli n, lli m){
    if(m==1) return 0;
    if (n == 0) return 1;
    x%=m;
    lli res = binpow_mod(x, n / 2, m);
    if (n % 2)
        return ( (res * res)%m * x ) % m;
    return (res * res) % m;
}
