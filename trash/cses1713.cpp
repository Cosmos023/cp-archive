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


const int MAXN = 1000001;
vector<int> spf(MAXN + 1, 1);

void sieve()
{
    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 1) { 
            for (int j = i; j <= MAXN; j += i) {
                if (spf[j]== 1) 
                    spf[j] = i;
            }
        }
    }
}

// prime factorisation
vector<pii> pf(int x)
{
    vector<pii> P;
    while(x>1)
    {
        int p = spf[x];
        int cnt = 0;
        while(x%p==0)
        {
            x/=p;
            cnt++;
        }
        P.push_back({p, cnt});
    }
    return P;
}

void solve()
{
	int n;
	cin >> n;
	vector<pii> P = pf(n);
	lli ans = 1;
	for(auto& [p, e]:P)
	{
		ans*=(1+e);
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	sieve();
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

