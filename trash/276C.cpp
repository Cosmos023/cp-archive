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
	int n,q;
	cin >> n>>q;
	vector<lli> a(n+1), d(n+1, 0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	while(q--)
 	{
 		int l,r; cin>>l>>r;
 		d[r]++; d[l-1]--;
 	}
 	for(int i = n-1; i>=0;i--) d[i]+=d[i+1];
 	// pL(d);
 	sort(a.begin()+1,a.end());
 	sor(d);
 	lli ans = 0;
 	for(int i = 1; i<=n; i++) ans+=a[i]*d[i];
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

