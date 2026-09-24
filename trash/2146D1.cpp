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

int inv(int x)
{
	int y = 0;
	for(int i = 30; i>=0; i--)
	{
		if(!y && ((x>>i)&1))
		{
			y=1;
		}
		if(y)
		{
			x^=(1<<i);
		}
	}
	return x;
}

void solve()
{
	int l, r;
	cin >> l >> r;
	vector<int> a(r-l+1);
	iota(all(a), 0);
 	for(int i=r-l; i>=0; i--)
 	{
 		if(a[i]==i)
 		{
 			swap(a[i], a[inv(i)]);
 		}
 	}
 	lli ans = 0;
 	for(int i=r-l; i>=0; i--)
 	{
 		ans+=(a[i]|i);
 	}
 	cout<<ans<<"\n";
 	pL(a);
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

