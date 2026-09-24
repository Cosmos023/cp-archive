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


const int MAXN = 500005;
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

vector<pii> pf(int x)
{
	vector<pii> P;
	if(x==1) return P;
	int cur = spf[x];
	x/=spf[x];
	int c = 1;
	while(x!=1)
	{
		while(x!=1 && spf[x]==cur)
		{
			c++;
			x/=cur;
		}
		P.push_back({cur,c});
		if(x==1) return P;
		cur=spf[x]; c=1; x/=spf[x];
	}
	P.push_back({cur,c});
	cur=spf[x]; c=1;
	return P;
}

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	map<int,int> mp;
 	for(int i=0; i<n; i++)
 	{
		for(auto& [p,y]:pf(a[i]))
		{
			mp[p]+=y;
		}
 	}
	lli ans = 1;
	for(auto& [x,y]:mp) 
	{
		ans*=(y+1); ans%=(1000000007);
	}
	cout<<ans<<"\n";
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

