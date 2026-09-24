#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";


const int MAXN = 1000005;
vector<bool> is_prime(MAXN, true);
vector<int> primes;
void Sieve() {
    is_prime[0] = is_prime[1] = false;
    for(int p = 2; p * p < MAXN; ++p) 
    {
        if(is_prime[p]) 
        {
            for(int i = p * p; i < MAXN; i += p) 
            {
                is_prime[i] = false;
            }
        }
    }
    for(int p = 2; p < MAXN; ++p) 
    {
        if (is_prime[p]) 
        {
            primes.push_back(p);
        }
    }
}



void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int f[primes.size()];
    for(int i=0; i<primes.size(); i++) f[i]=0;

    for(int i=0; i<n; i++)
    {
        int p = 0;
        while(a[i]>1)
        {
            if(a[i]%primes[p]==0)
            {
                a[i] /= primes[p];
                f[p]++;
            }
            else p++;
            if(primes[p]*primes[p]>a[i]) break;
        }
    }
    for(int i=0; i<primes.size(); i++)
    {
        if(f[i]%n!=0)
        
{            cout<<"NO\n";
            return;
        }
    }
    cout << "YES\n";

}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Sieve();
    int t=1;
    cin >> t;
    while(t--) 
    {
        solve();
    }
}