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
#define pL(s) for(auto const& i:s) cout<<i<<", "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

const int MAXN = 10000001;
vector<int> spf(MAXN + 1, 1);
vector<int> a(MAXN + 1, 0);

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
  	int c = 1;
  	int k = i/spf[i];
  	int l = spf[i];
  	while(k>1)
  	{
  		if(spf[k]!=l)
  		{
  			l=spf[k]; c++;
  		}
  		k/=spf[k];
  	}
  	a[i]=c;
  }
}

void solve()
{
	int n;
	cin >> n;
	lli ans = 0;
 	for(int i=2; i<=n; i++)
 	{
 		ans+=a[i];
 	}
 	cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	sieve();
	// pL(a);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

