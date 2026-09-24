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

void solve()
{
	lli a,b,c,m;
	cin >> a>>b>>c>>m; 
	lli k1 = lcm(a,b);
	lli k2 = lcm(a,c);
	lli k3 = lcm(c,b);
	lli k4 = lcm(k1, c);
	lli A = 6*(m/a)-3*(m/(k1))-3*(m/(k2))+2*(m/(k4));
	lli B = 6*(m/b)-3*(m/(k1))-3*(m/(k3))+2*(m/(k4));
	lli C = 6*(m/c)-3*(m/(k2))-3*(m/(k3))+2*(m/(k4));
	cout<<A<<" "<<B<<" "<<C<<"\n";
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

