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
	int n, m;
	cin >> n >> m;
	vector<lli> a(n+1), b(m), p(n+1, 0);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<m; i++) cin >> b[i];
	for(int i=0; i<n; i++) p[i+1]=p[i]+a[i+1];
	sor(b);
	vll J;
	for(int i=0; i<m; i++)
	{
		J.push_back(-2*p[b[i]]);
	}
	reverse(all(J));
	// sor(J);
		debug(p, J);
	ll ans = p[n];

	ll S = p[n];
	int l=0, r=m-1;
	int k = 1;
	vll dpm(m, 0), dpp(m, 0);
	dpp[0]=J[0];
	dpm[0]=0;
	for(int i = 1; i<m; i++)
	{
		// if(i==1)
		// {
		// 	dpp[i] = max(dpp[i-1], J[i]);
		// 	dpm[i] = dpp[i-1]-J[i];
		// 	continue;
		// }
		dpp[i] = max(dpp[i-1], dpm[i-1]+J[i]);
		dpm[i] = max(dpm[i-1], dpp[i-1]-J[i]);
	}
	cout<<max(S, ans + max(dpp[m-1], dpm[m-1]))<<endl;
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

