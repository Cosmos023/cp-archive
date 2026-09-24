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

void solve()
{
	lli n;
	cin >> n;
	string s; cin>>s;
	s="!"+s;
	vi a(n+1,0);
	vi b(n+1,0);
	vi c(n+1,0);
	vi x(n+1,0);
	vi y(n+1,0);
	vi z(n+1,0);
	for(int i = 1; i<=n; i++)
	{
		a[i]=a[i-1];
		b[i]=b[i-1];
		c[i]=c[i-1];
		if(s[i]=='A') a[i]++;
		else if (s[i]=='B') b[i]++;
		else c[i]++; 
	}
	// pL(b);
	for(int i = 1; i<=n; i++)
	{
		x[i]=a[i]-b[i];
		y[i]=b[i]-c[i];
		z[i]=a[i]-c[i];
	}
	lli ans = n*(n+1)/2;
	map<int, lli> mpx,mpy,mpz;
	for(int i = 0; i<=n; i++)
	{
		mpx[x[i]]++;
		mpy[y[i]]++;
		mpz[z[i]]++;
	}
	for(auto& [f,s]:mpx) ans-=(s*(s-1)/2);
	for(auto& [f,s]:mpy) ans-=(s*(s-1)/2);
	for(auto& [f,s]:mpz) ans-=(s*(s-1)/2);
	map<pair<int,int>, lli> xy,yz,zx;
	for(int i = 0; i<=n; i++)
	{
		xy[{x[i],y[i]}]++;
		yz[{y[i],z[i]}]++;
		zx[{z[i],x[i]}]++;
	}
	for(auto& [f,s]:xy) ans+=(s*(s-1)/2);
	for(auto& [f,s]:yz) ans+=(s*(s-1)/2);
	for(auto& [f,s]:zx) ans+=(s*(s-1)/2);
	// cout<<zx[{0,0}]<<endl;
	map<pair<int,pair<int,int>>, lli> xyz;
	for(int i = 0; i<=n; i++)
	{
		xyz[{x[i],{y[i],z[i]}}]++;
	}
	for(auto& [f,s]:xyz) ans-=(s*(s-1)/2);
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

