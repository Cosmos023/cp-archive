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
	lli n,k,x,a,b,c;
	cin >> n>>k>>x>>a>>b>>c;
	lli ans = 0;
	lli l = x;
	lli r = l;
	set<lli> s;
 	for(int i=0; i<k; i++) {s.insert(r); r=(a*r+b)%c;}
 	for(int i = 0; i<n-k+1; i++)
 	{
 		ans^=*s.begin();
 		s.erase(l); s.insert(r);
 		l=(a*l+b)%c; r=(a*r+b)%c;
 	}
 	cout<<ans<<endl;
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

