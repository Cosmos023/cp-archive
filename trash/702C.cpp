#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n,m;
	cin >> n>>m;
	vector<lli> a(n);
	vector<lli> b(m);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<m; i++) cin >> b[i];

 	lli ans = LLONG_MIN;
 	for(int i=0; i<n; i++)
 	{
 		lli k = LLONG_MAX;
 		auto it = lower_bound(all(b), a[i]);
 		if(it!=b.end())
 		{
 			k = *it-a[i];
 		}
 		if(it!=b.begin())
 		{
 			it--;
 			k = min(k, -*it+a[i]);
 		}
 		ans = max(k, ans);
 	}
 	cout<<ans<<"\n";
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
