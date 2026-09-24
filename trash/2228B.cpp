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
	int n,x1,x2,k;
	cin >> n >> x1 >> x2 >> k;
	if(n==2 || n==3)
	{
		cout<<"1\n"; return;
	}
	if(n%2==0 && abs(x1-x2)==n/2)
	{
		// cout<<"h"<<"\n";
		x1++;
		int z1 = 1+k+min(abs(x2-x1), min(x1+n-x2, x2+n-x1));
		x1--; x1--;
		int z2 = 1+k+min(abs(x2-x1), min(x1+n-x2, x2+n-x1));
		cout<<max(z1,z2)<<"\n";
		return;
	}
	cout<<k+min(abs(x2-x1), min(x1+n-x2, x2+n-x1))<<"\n";
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

