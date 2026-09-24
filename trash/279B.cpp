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
	int n,t;
	cin >> n>>t;
	vector<int> a(n+1);
	vll p(n+1,0);
	p[0]=0;
 	for(int i=1; i<=n; i++) cin >> a[i];
 	for(int i=1; i<=n; i++) p[i]=p[i-1]+a[i];
 	lli M = 0;
 	for(int i=1; i<=n; i++)
 	{
 		auto k = upper_bound(p.begin()+1,p.end(),p[i-1]+t);
 		k--;
 		M = max(M, k-p.begin()-i+1);
 	}
 	cout<<M;
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

