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

void solve()
{
	debug("HI");
	ll n,a,b;
	cin >> n>>a>>b;
	vector<int> c(n);
	for(int i=0; i<n; i++)
	{
		cin >> c[i];
	}
	sor(c);
	if(n==1) {cout<<c[0]<<endl; return;}
	if(n==2) {cout<<(c[1]-c[0])%abs(a-b)<<endl; return;}
	ll q = c[c.size()-2]-c[0];
	if(a!=b)
	// cout<<q%abs(a-b)<<endl;
		if(q%abs(a-b)<abs((a-b)/2)
			cout<<q%abs(a-b)<<endl;
		else cout<<abs(q%abs(a-b)-abs(a-b))<<endl;

	else
	cout<<q<<endl;
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

