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

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<lli> a(n+1), t(n+1), p(n+1,0);
 	for(int i=0; i<n; i++) cin >> a[i+1];
 	for(int i=0; i<n; i++) cin >> t[i+1];
 	lli ans = 0;
 	for(int i=1; i<=n; i++)
 	{
 		if(t[i]==1)
 		{
 			ans+=a[i]; p[i]=p[i-1];
 		}
 		else p[i]=p[i-1]+a[i];
 	}
 	lli M = 0;
 	for(int i=1; i<=n-k+1; i++)
 	{
 		M = max(M, p[i+k-1]-p[i-1]);
 	}
 	ans+=M;
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

