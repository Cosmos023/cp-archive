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
	ll l, r, G; cin>>l>>r>>G;
	l = (l+G-1)/G; r = r/G;
	if(l>r)
	{
		cout<<"-1 -1\n"; return;
	}
	ll ansA = -1, ansB=-1;
	int y = 0;
	for(ll i = l; i <= r; i++)
	{
		if(y && ansB-ansA > r-i) break;
		ll k = r;
		while(k>=i && gcd(k, i)!=1) k--;
		if(k>=i && gcd(k, i)==1)
		{
			if(!y) {ansA=i; ansB=k;}
			if(y && ansB-ansA<k-i) {ansA=i; ansB=k;}
			y=1;
		}
	}
	debug(l, r, ansA, ansB);
	if(y) cout<<ansA*G<<" "<<ansB*G<<endl;
	else cout<<"-1 -1\n";
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

