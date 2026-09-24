#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
const ll mod = 1e9+7;

ll b, c;

ld f(ld x)
{
	return (x*x+b*x+c)/sin(x);
}

void solve()
{
	cin>>b>>c;
	ld l = 0, r = numbers::pi;
	while((r-l)>1e-7)
	{
		ld m1 = l+(r-l)/3;
		ld m2 = r-(r-l)/3;
		ld f1 = f(m1), f2 = f(m2);
		if(f1>f2) l = m1;
		else r = m2;
	}
	cerr<<log(1e-15)/log(2.0l/3)<<endl;
	cout<<fixed<<setprecision(15)<<f(l)<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t; while(t--) { solve(); }
}