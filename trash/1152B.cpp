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
	int x; cin>>x;
	if(__builtin_popcount(x+1)==1)
	{
		cout<<"0\n"; return;
	}
	vi ans;
	ans.push_back(__builtin_ctz(x));
	x = x^((1<<__builtin_ctz(x))-1);
	while(__builtin_popcount(x+1)!=1)
	{
		x++;
		ans.push_back(__builtin_ctz(x));
		x = x^((1<<__builtin_ctz(x))-1);
	}
	cout<<2*ans.size()-1<<"\n";
	pL(ans);
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

