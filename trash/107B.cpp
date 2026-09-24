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
using LD = long double;

LD f(LD A, LD B, LD C, LD D)
{
	LD ans = 1;
	debug(ans, A,B,C,D);
	if(A<0 || B<0) return 2;
	if(C<0 || D<0) return 0;
	while(A>0 || B>0 || C>0 || D>0)
	{
		if(A<=0) A=1;
		if(B<=0) B=1;
		if(C<=0) C=1;
		if(D<=0) D=1;
		ans *= (A/C)*(B/D);
		A--; B--; C--; D--;
	}
	return ans;
}

void solve()
{
	int n,m,h;
	cin >> n >> m >> h; h--;
	vector<lli> a(m);
	for(int i=0; i<m; i++) cin >> a[i];
	lli sumS = accumulate(all(a), 0LL);
	long double ans = 1 - f(sumS-a[h], sumS-n, sumS-a[h]-n+1, sumS-1);
	cout << fixed << setprecision(15) << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

