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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

bool check(vi& a, vi& b, int x, int sz)
{
	int k = sz-x;
	for(int i = 1; i<=k; i++)
	{
		if(a[i]>=b[x+i]) return false;
	}
	return true;
}

void solve()
{
	int n,m;
	cin >> n>>m;
	vector<int> a(n+1);
	vector<int> b(n+1);
 	for(int i=2; i<=n; i++) cin >> a[i];
 	for(int i=1; i<=n; i++) cin >> b[i];
 	a[1]=1;
 	sor(a);sor(b);
 	int l = 0, r = n;
 	int x = -1;
 	while(l<=r)
 	{
		int m = (l+r)/2;
		if(check(a, b, m, n))
		{
			x = m;
			r = m-1;
			continue;
		}
		l = m+1;
 	}
 	cout<<x<<"\n";
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

