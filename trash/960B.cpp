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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n,k1,k2;
	cin >> n>>k1>>k2;
	vector<int> a(n), b(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<n; i++) cin >> b[i];
 	for(int i=0; i<n; i++) a[i] = abs(a[i]-b[i]);
 	sor(a);
 	int k = k1+k2;
 	multiset<lli> s(all(a));

 	while(k!=0)
 	{
 		k--;
 		lli c = *s.rbegin();
 		s.erase(s.find(c));
 		s.insert(abs(c-1));
 	}
 	lli ans = 0;
 	for(lli c:s) ans+=(c*c);
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

