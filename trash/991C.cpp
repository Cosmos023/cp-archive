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


pair<lli,lli>	count(lli n, lli k)
{
	  lli c = 0;
	  while((n-k)>=10)
	  {
	  	c++;
	  	n = n-k - (n-k)/10;
	  }
	  return {c, n};
}


void solve()
{
	lli n;
	cin >> n;
	lli l = 1, r = n;
	lli ans = n;
	while(l<=r)
	{
		lli m = (l+r)/2;
		pair<lli, lli> ct = count(n, m);
		lli total = ct.first*m + ct.second;
		if(total>=(n+1)/2)
		{
			ans = m;
			r=m-1;
		}
		else
		{
			l=m+1;
		}
	}
	cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

