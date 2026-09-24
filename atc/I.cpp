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
#include "../util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n;
	cin >> n;
	vector<ld> pre(n+1, 0), cur(n+1, 0), p(n+1);
	pre[0]=1;
	for(int i=0; i<n; i++) cin >> p[i+1];
	for(int K = 1; K <= n; K++)
	{
		cur[0] = (1-p[K])*pre[0];
		for(int i = 1; i <= n; i++)
		{
			cur[i] = p[K]*pre[i-1]+(1-p[K])*pre[i];
		}
		swap(cur, pre);
	}
	int k = n/2+1;
	ld ans = accumulate(pre.begin()+k, pre.end(), 0.0L);
	cout<<fixed<<setprecision(15)<<ans<<endl;
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

