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
	vector<lli> a(n);
	lli M = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		M = max(M, a[i]);
 	}
 	vll c(M+1, 0);
 	for(int i=0; i<n; i++) c[a[i]]++;
 	vll dp0(M+1,0), dp1(M+1,0);
 	dp0[0] = 0;
 	dp1[0] = 0;
 	dp0[1] = max(dp0[0], dp1[0]);
 	dp1[1] = c[1]+dp0[0];
 	for(int i = 2; i<=M; i++)
 	{
 		dp0[i] = max(dp0[i-1], dp1[i-1]);
 		dp1[i] = c[i]*i + max(dp0[i-1], dp1[i-2]);
 	}
 	cout<<max(dp0[M],dp1[M]);
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

