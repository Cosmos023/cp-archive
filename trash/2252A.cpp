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
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> C(1001, 0);
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		C[a[i]]++;
	}
	int Mi = 0, M=0;
	for(int i = 1; i <= 1000; i++)
	{
		if(M==C[i]){Mi=i; M=C[i];}
		if(M<C[i]){Mi=i; M=C[i];}
	}
	ll ans = 0;
	int k = 0;
	for(int i = 1; i <= 1000; i++)
	{
		if(i!=Mi){ ans += C[i]*i; k+=C[i];}
	}
	debug(Mi, M, k, ans);
	if(k==M || k+1==M) ans+=M*Mi;
	else ans += min(M, (k+2))*Mi
;	cout<<ans<<endl;
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

