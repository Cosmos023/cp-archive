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

#define int long long

const int MAXN = 200001;
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


void z(int x, map<int, vector<int>>& mp)
{
	int c = 1;
	int l = spf[x];
	x/=spf[x];
	while(x>1)
	{
		if(l!=spf[x])
		{
			mp[l].push_back(c);
			c=0; l = spf[x];
			continue;
		}
		x/=spf[x]; c++;
	}
	mp[l].push_back(c);
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	if(n==2)
 	{
 		cout<<lcm(a[0],a[1])<<"\n"; return;
 	}
 	map<int, vector<int>> mp;

 	for(int i=0; i<n; i++) z(a[i],mp);
 	lli ans = 1;
 	for(auto& [p, e]:mp)
 	{
 		if(e.size()==n)
 		{
 			nth_element(e.begin(),e.begin()+1,e.end());
 			for(int i=0; i<e[1]; i++)
 			{
 				ans*=p;
 			}
 		}
 		else if(e.size()==n-1)
 		{
 			for(int i=0; i<*min_element(all(e)); i++)
 			{
 				ans*=p;
 			}
 		}
 	}
 	cout<<ans<<"\n";
}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	sieve();
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

