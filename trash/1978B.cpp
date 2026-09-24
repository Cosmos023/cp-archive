#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
const ll mod = 1e9+7;

ll n,a,b; 
ll f(ll k)
{
	return b*k+k-k*(k+1)/2+(n-k)*a;
}

void solve()
{
	cin>>n>>a>>b;
	ll l = 0, r = min(n,b);
	while(r-l>=3)
	{
		ll m1 = l+(r-l)/3;
		ll m2 = r-(r-l)/3;
		ll f1 = f(m1), f2 = f(m2);
		if(f1<f2) l = m1+1;
		if(f1>f2) r = m2-1;
		if(f1==f2) {l=m1;r=m2;}
	}
	ll M = 0;
	for(int i = l; i <= r; i++)
	{
		M = max(M, f(i));
	}
	cout<<M<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t; while(t--) { solve(); }
}