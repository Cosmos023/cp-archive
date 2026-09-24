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
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n),b(n),c(n);
	vector<lli> fa(n,0),fb(n,0),fc(n,0);
	for(int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];
	fa[0]=a[0];
	fb[0]=b[0];
	fc[0]=c[0];
	for(int i=1; i<n; i++)
	{
		fa[i] = a[i]+max(fb[i-1],fc[i-1]);
		fb[i] = b[i]+max(fa[i-1],fc[i-1]);
		fc[i] = c[i]+max(fa[i-1],fb[i-1]);
	}
	cout<<max(fa[n-1],max(fb[n-1],fc[n-1]))<<endl;
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

