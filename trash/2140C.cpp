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
	vector<lli> a(n+1);
	int k = 1;
	lli f = 0;
	lli m = LLONG_MAX, M = LLONG_MIN;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		f+=k*a[i]; k*=-1;
 		if(i%2)
 			m = min(m, 2*a[i]+i);
 		else
 			M = max(M, 2*a[i]+i);
 	}
 	lli L = M-m;
	m = LLONG_MAX; M = LLONG_MIN;
 	for(int i=1; i<=n; i++)
 	{
 		if(i%2)
 			m = min(m, 2*a[i]-i);
 		else
 			M = max(M, 2*a[i]-i);
 	}
 	L = max(L, M-m);
 	if(n==1)
 	{
 		cout<<a[1]<<"\n"; return;
 	}
 	lli z = (n%2)?(n-1):(n-2);
 	if(z>L)
 		cout<<f+z<<"\n";
 	else
 		cout<<f+L<<"\n";
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
