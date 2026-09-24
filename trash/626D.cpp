#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
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

void solve()
{
	int n; cin >> n;
	vll a(n, 0);
	vll D(5001, 0);
	vll P(5001, 0);
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			D[abs(a[i]-a[j])]++;
		}
	}
	for(int i=1; i<=5000; i++) P[i]=P[i-1]+D[i];
	ld ans = 0;
	ld den = 1.0l*P[5000]*P[5000]*P[5000];
	for(int i = 1; i <= 5000; i++)
	{
		for(int j = 1; j <= 5000; j++)
		{
			ans += (i+j>5000)?0:1.0l*D[i]*D[j]*(P[5000]-P[i+j]);
			if(D[i]*D[j]!=0) {debug(i, j, D[i], D[j]);}
		}
	}
	cout<<fixed<<setprecision(15)<<ans/den<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

