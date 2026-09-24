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

lli f(vi& p, vi& a, int x, int k)
{
	vi s; s.push_back(x);
	int t = x;
	x = p[x];
	while(x!=t)
	{
		s.push_back(x); x=p[x];
	}
	lli sm = 0;
	lli ans = -1;
	for(int i = 0; i<s.size() && i<k; i++)
	{
		sm+=a[s[i]];
		ans = max(ans, sm+1LL*(k-1-i)*a[s[i]]);
	}
	return ans;
}

void solve()
{
	int n,k,pb,ps;
	cin >> n>>k>>pb>>ps;
	vector<int> p(n+1);
	vector<int> a(n+1);
 	for(int i=1; i<=n; i++) cin >> p[i];
 	for(int i=1; i<=n; i++) cin >> a[i];
 	lli n1 = f(p, a, pb, k);
 	lli n2 = f(p, a, ps, k);
 	if(n1>n2) cout<<"Bodya\n";
 	else if(n1<n2) cout<<"Sasha\n";
 	else cout<<"Draw\n";
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

