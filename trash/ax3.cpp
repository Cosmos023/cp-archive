#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
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

using ld = long double;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r)
{
  return uniform_int_distribution<int>(l, r)(rng);
}

void solve()
{
	int n;
	cin >> n;
	vector<ld> x(n);
	vector<ld> y(n);
	for(int i=0; i<n; i++) cin >> x[i] >> y[i];
	while(true)
	{
		int i = rnd(0, n-1);
		int j = rnd(0, n-1); while(j==i) j = rnd(0, n-1);
		int k = rnd(0, n-1); while(k==i || k==j) k = rnd(0, n-1);
		ld Q12 = (y[i]-y[j])/(x[i]-x[j]);
		ld Q23 = (y[j]-y[k])/(x[j]-x[k]);
		ld S12 = x[i]+x[j];
		ld S23 = x[j]+x[k];
		ld a = (Q12-Q23)/(S12-S23);
		ld b = Q12 - a*S12;
		ld c = y[i] - (a*x[i]*x[i] + b*x[i]);
		// int found = true;
		int count = 0;
		for(int z = 0; z < n; z++)
		{
			ld P = a*x[z]*x[z]+b*x[z]+c;
			debug(i, j, k, z, abs(P-y[z]));
			if(abs(P-y[z]) <= 1e-3 || abs(P-y[z])/abs(y[z]) <= 1e-3)
			{
				count++;
			}
		}
		if(count >= (n+1)/2)
		{
			cout<<fixed<<setprecision(15)<<-b/(2*a)<<" ";
			cout<<fixed<<setprecision(15)<<c+(1.0L-b*b)/(4*a)<<endl;
			break;
		}
	}
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