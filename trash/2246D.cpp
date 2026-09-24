#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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

vi C(100005);
void pc()
{
	C[1]=1;
	for(int i = 2; i<100005; i++)
	{
		if(i%2) C[i]=1+C[i-1];
		else C[i]=1+C[i/2];
	}
}
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	ll H, F, odd;
	H=F=odd=0;
	for(int i = 1; i <= n; i++)
	{
		H += C[(a[i]+1)/2];
		F += C[a[i]];
		if(a[i]%2) odd++;
	}
	debug(H, F, odd);
	ll ans = 1+odd+H;
	if(odd!=0) ans = min(ans, F);
	cout<<ans<<endl;
}

int main()
{
	pc();
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

