#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
const int mod = 1e9+7;

ld f(ld a, ll n)
{
	ld ans = 1;
	ld k = 1.0l-a;
	cerr<<k<<endl;
	for(int i = 0; i < n; i++)
	{
		ans*=k;
	}
	cerr<<fixed<<setprecision(15)<<log(2)<<endl;
	return ans;
}

void solve()
{
	ll n; cin >> n;
	ld a, b; cin>>a>>b;
	ld ans = f(a, n)-f(b, n);
	cout<<fixed<<setprecision(15)<<ans<<endl;
}

int main()
{
	int t; cin>>t; while(t--) { solve(); }
}