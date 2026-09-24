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
	lli x, y;
	cin >> x >> y;
	lli k = 0;
	int i = 0;
	// 19 = 10011, 10=1010
	while(i<32 && k<1e11)
	{
		if(((x>>i)&1)&&((y>>i)&1))
		{
			k+=(1<<i);
			x+=(1<<i);
			y+=(1<<i);
		}
		i++;
	cout<<k<<"\n";
	}
	cout<<k<<"\n";
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

