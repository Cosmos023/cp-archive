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
	lli n,m;
	cin >> n>>m;
	lli c = n;
	lli n2 = 0, n5 = 0;
	while(n%5==0)
	{
		n5+=1; n/=5;
	}
	while(n%2==0)
	{
		n2+=1; n/=2;
	}
	lli k = 1;
	if(n2>n5)
	{
		while(k*5<=m && n2>n5)
		{
			k*=5; n5++;
		}
	}
	if(n2<n5)
	{
		while(k*2<=m && n2<n5)
		{
			k*=2; n2++;
		}
	}
	while(k*10<=m)
	{
		k*=10;
	}
	if(k*9<=m) k*=9;
	if(k*8<=m) k*=8;
	if(k*7<=m) k*=7;
	if(k*6<=m) k*=6;
	if(k*5<=m) k*=5;
	if(k*4<=m) k*=4;
	if(k*3<=m) k*=3;
	if(k*2<=m) k*=2;
	cout<<k*c<<"\n";
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

