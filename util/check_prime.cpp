#include<bits/stdc++.h>
using namespace std;
 
using lli = long long int;

// check if a given number is prime in sqrt(n) time
bool checkPrime(lli n){
    if(n==2) return true;
    if(n<=1) return false;
    lli i = 2;
    lli k = ceil(sqrt(n));
    // While loop till the square root of n
    while(i <= k){
        if(n % i == 0)
            return false;
        i += 1;
    }
    return true;
}

int main() {
    // driver code
    lli x = 1;
    if(checkPrime(x)) cout << "Prime";
    else cout << "Not Prime";
}