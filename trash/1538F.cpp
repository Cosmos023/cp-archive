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
	lli l,r;
	cin >> l >> r;
	vll k = {1, 11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
	string ls = to_string(l);
	string rs = to_string(r);
	reverse(all(ls));
	reverse(all(rs));
	lli ans = 0;
	for(int i = 0; i<rs.size(); i++)
	{
		ans+=k[i]*(rs[i]-'0');
	}
	for(int i = 0; i<ls.size(); i++)
	{
		ans-=k[i]*(ls[i]-'0');
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

