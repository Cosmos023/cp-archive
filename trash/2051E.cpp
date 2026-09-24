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

int check(int x, vll& a, vll& b)
{
	int c = 0;
	for(int i = 0; i<a.size(); i++)
	{
		if(x>a[i] && x<=b[i]) c++;
	}
	return c;
}

void solve()
{
	int n,k;
	cin >> n>>k;
	vector<lli> a(n), b(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<n; i++) cin >> b[i];
 	vll p;
 	for(int i=0; i<n; i++)
 	{
 		p.push_back(a[i]);
 		p.push_back(b[i]);
 	}
 	sor(p);
 	p.erase(unique(all(p)),p.end());
 	int l = 0, r=p.size()-1;
 	lli ani = 0;
 	while(l<=r)
 	{
 		int m = (l+r)/2;
 		if(check(p[m], a, b)<=k)
 		{
 			ani = m;
 			l=m+1;
 		}
 		else
 			r=m-1;
 	}
 	lli ans = 0;
 	for(int i = 0; i<n; i++)
 	{
 		if(p[ani]<=b[i]) ans+=p[ani];
 	}
 	cout<<ans<<"\n";
 	pL(p);
 	cout<<check(5, a, b)<<"i\n";
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

