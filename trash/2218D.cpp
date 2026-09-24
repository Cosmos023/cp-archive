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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

const lli MAXN = 1e7;
vector<bool> is_prime(MAXN, true);
vector<lli> primes;
void Sieve() {
    is_prime[0] = is_prime[1] = false;
    for(lli p = 2; p * p < MAXN; p++) 
    {
        if(is_prime[p]) 
        {
            for(lli i = p * p; i < MAXN; i += p) 
            {
                is_prime[i] = false;
            }
        }
    }
    for(lli p = 2; p < MAXN; p++) 
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
	vector<lli> a(n);
 	for(int i=0; i<n; i++)
 	{
 		a[i]=primes[i]*primes[i+1];
 	}
 	pL(a);
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

