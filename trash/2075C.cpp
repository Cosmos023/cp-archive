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

void solve()
{
	int n, p;
	cin >> n >> p;
	vector<ll> a(p+1), P(p+1, 0);
	for(int i=0; i<p; i++) {cin >> a[i+1]; if(a[i+1]>=n)a[i+1]=n-1; a[i+1]--;}
	sort(a.begin()+1, a.end());
	ll k = n-2;
	ll ans = 0;
	for(ll i = 1; i<=p; i++) P[i]=P[i-1]+a[i]+1;
	for(ll i = 1; i<=p; i++)
	{
		int M = a[i];
		auto it = lower_bound(a.begin()+1, a.end(), -1+k-M);
		if(M>=k) ans += P[i-1];
		else 
		{
			if(it!=a.end() && it-a.begin() < i)
			{
				ans+=P[i-1]-P[it-a.begin()-1]+(i-(it-a.begin()))*(M-k);
				debug(i, it-a.begin(), P[i-1]-P[it-a.begin()-1]+(i-(it-a.begin()))*(M-k));
			}
		}
	}
	cout<<2*ans<<endl;
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

