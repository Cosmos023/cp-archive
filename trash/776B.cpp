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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

const lli MAXN = 1e6+5;
vector<bool> is_prime(MAXN, true);
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
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
 	for(int i=2; i<=n+1; i++)
 	{
 		a[i-2] = is_prime[i]?1:2;
 	}
 	if(n<=2) cout<<"1\n"; else cout<<"2\n";
 	pL(a);
}

int main()
{
	Sieve();
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

