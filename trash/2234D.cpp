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

lli z(lli k)
{
	if(k==1 || k==2) return 1;
	return 1+4*z(k-2);
}

void solve()
{
	lli n, k;
	cin >> n >> k;
	string s,t; cin>>s>>t;
	lli Z = z(k);
	if(k%2) Z=(1+(1<<k))/3;
	lli zs = 0, zt=0, zx=0;
	for(int i = 0; i<n; i++) if(s[i]=='1') zs++;
	for(int i = 0; i<n; i++) if(t[i]=='1') zt++;
	for(int i = 0; i<n; i++) if(t[i]!=s[i]) zx++;
	lli ans = 0;
	ans += Z*zx*(n-zx);
	lli T = (1<<k)+1;
	T-=Z; T/=2;
	ans += T*zs*(n-zs);
	ans += T*zt*(n-zt);
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

