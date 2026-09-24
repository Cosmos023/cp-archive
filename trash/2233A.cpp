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

lli xd(lli x, lli y)
{
	return (x+y-1)/y;
}

void solve()
{
	lli n, x,y,z;
	cin >> n>>x>>y>>z;
	lli m1 = (n+x+y-1)/(x+y);
	lli m2 = xd(n+10*y*z, x+10*y);
	if(m2>=z)
	cout<<min(m1,m2)<<"\n";
	else
	cout<<m1<<"\n";
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

