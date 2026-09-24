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
	int n, k;
	cin >> n >> k;
	vector<int> a(n),b(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<n; i++) cin >> b[i];
 	vll p(n,0);
 	p[0]=b[0];
 	for(int i=1; i<n; i++)
 	{
 		p[i]=p[i-1]+b[i];
 	}
 	int ans = 0;
 	for(int i=0; i<n; i++)
 	{
 		auto it = lower_bound(all(p), a[i]+((i!=0)?p[i-1]:0));
 		if(it!=p.end())
 		{
 			int z = (it-p.begin());
 			ans = max(ans, z-i+1);
 		}
 		else
 		{
 			auto j = lower_bound(all(p), a[i]-p[n-1]+p[i-1]);
 			int z = (j-p.begin());
 			ans = max(ans, n-i+1+z+1);
 		}
 		cerr<<ans<<endl;
 	}
 	cout<<ans<<"\n";
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

