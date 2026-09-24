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
	int n;
	cin >> n;
	vector<int> x(n+1), h(n);
	x[n]=INT_MAX;
 	for(int i=0; i<n; i++) 
 	{
 		cin >> x[i]>>h[i];
 	}
 	if(n==1)
 	{
 		cout<<"1\n"; return;
 	}

 	vll dp0(n,0),dp1(n,0);
 	dp0[0]=1;
 	dp1[0] = (x[1]-x[0]>h[0])?1:0;
 	for(int i=1; i<n; i++) 
 	{
 		dp0[i] = max(dp0[i-1],dp1[i-1]);
 		if(x[i]-x[i-1]>h[i])
 		{
 			dp0[i] = max(dp0[i], dp0[i-1]+1);
 		}
 		if(x[i]-x[i-1]>h[i]+h[i-1])
 		{
 			dp0[i] = max(dp0[i], dp1[i-1]+1);
 		}
 		dp1[i] = max(dp0[i-1],dp1[i-1])+1;
 		if(x[i+1]-x[i]<=h[i]) dp1[i]=INT_MIN;
 		// pL(dp0);
 		// pL(dp1);
 	}
 	lli ans = 0;
 	for(int i=0; i<n; i++) ans = max(ans, max(dp1[i],dp0[i])); 
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

