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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool check(lli m, lli h, vll& a)
{
	lli z=m;
	for (int i = 0; i < a.size()-1; ++i)
	{
		z+=min(m,a[i+1]-a[i]);
	}
	return z>=h;
}

void solve()
{
	lli n, h;
	cin >> n >> h;
	vector<lli> a(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	lli l = 1, r = h;
 	lli m, ans;
 	while(l<=r)
 	{
 		m = (l+r)/2;
 		if(check(m, h, a))
 		{
 			r = m-1;
 			ans = m;
 		}
 		else l=m+1;
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

