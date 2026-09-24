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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

void solve()
{
	int n,k;
	cin >> n>>k;
	vector<lli> a(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	lli ans = 0;
 	int c0 = 0;
 	int c1 = 0;
 	vi c(n+1,0);
 	for(int i=1; i<=k; i++)
 	{
 		if(a[i]<2*a[i+1])
 		{
 			c1++;
 			c[i]=1;
 		}
 		else c0++;
 	}
 	if(c0==0)ans++;
 	for(int i=k+1; i<n; i++)
 	{
 		if(a[i]<2*a[i+1])
 		{
 			c1++;
 			c[i]=1;
 		}
 		else c0++;
 		if(c[i-k]==0)c0--;
 		else c1--;
 		if(c0==0) ans++;
 	}
 	cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

