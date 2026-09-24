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

lli m =  998244353;

void solve()
{
	lli n,x;
	cin >> n>>x;
	lli l1 = (x-1)/4 + (((x-1)%4>0)?1:0);
	lli l0 = 1+(x-1)/4 + (((x-1)%4==3)?1:0);
	lli r1 = n/4 + ((n%4>0)?1:0) - l1;
	lli r0 = 1+n/4 + ((n%4==3)?1:0) - l0;
	l1%=m;l0%=m;r1%=m;r0%=m;
	cout<<(max(l1*r1,0LL)%m+max(l0*r0,0LL)%m)%m<<"\n";
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

