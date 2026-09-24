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
	ll n;
	cin >> n;
	string a, b; cin>>a>>b;
	map<char, vll> MA, MB;
	for(ll i = 0; i < n; i++)
	{
		MA[a[i]].push_back(i+1);
		MB[b[i]].push_back(i+1);
	}
	__int128 ans = 0;
	for(auto& [c, V]: MA)
	{
		vll& B = MB[c];
		if(B.size()==0) continue;
		vll p(B.size(), 0);
		p[0] = B[0];
		for(ll i = 1; i<B.size(); i++) p[i]=p[i-1]+B[i];
			debug(c, p);
		for(ll d1:V)
		{
			ll k = lower_bound(all(B), d1)-B.begin();
			if(k>=1) ans+=1LL*d1*((B.size()-k)*(n+1)-(p.back()-p[k-1]));
			else ans+=1LL*d1*((B.size()-k)*(n+1)-(p.back()));
		// debug(c, ans);
			if(k!=0) ans+=1LL*(1+n-d1)*(p[k-1]);
		}
		// for(ll d1:V)
		// {
		// 	for(ll d2: MB[c])
		// 	{
		// 		ans += (min(d1, d2))*(1+min(n-d1, n-d2));
		// 	}
		// }
	}
	ll den = 1LL*n*(n+1)*(2*n+1)/6;
	// debug(ans);
	cout<<fixed<<setprecision(15)<<1.0l*ans/den<<endl;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t=1;
	while(t--)
	{
		solve();
	}
}