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

void solve()
{
	int n, m, k, w;
	cin >> n >> m >> k >> w;
	vector<int> a(w);
 	for(int i=0; i<w; i++) cin >> a[i];
 	sort(rall(a));
 	vi V;
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=m; j++)
		{
			int x = min(min(k, n-k+1), min(i, n-i+1));
			int y = min(min(k, m-k+1), min(j, m-j+1));
			V.push_back(x*y);
		}
	}
	sort(rall(V));
	// pL(a); pL(V);
	lli ans = 0;
 	for(int i=0; i<w; i++)
 	{
 		ans += 1LL*V[i]*a[i];
 	}
 	cout<<ans<<endl;
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

