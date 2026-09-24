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
	int x,y;
	cin >> x>>y;
	if(x>y || (x==0 && y%2==0))
	{
		NO; return;
	}
	YES;

	if((x==0 && y%2))
	{
		for(int i = 2; i<=y; i++)
		{
			cout<<1<<" "<<i<<"\n";
		}
		return;
	}

	int k = 2*x+1;
	y -= x;
	for(int i = 1; i<2*x; i++)
	{
		cout<<i<<" "<<i+1<<"\n";
	}
	if(y==1)
	{
		cout<<k-1<<" "<<k<<"\n"; return;
	}
	for(int i = 0; i<y/2*2; i++)
	{
		cout<<1<<" "<<k<<"\n";
		k++;
	}
	if(y-y/2*2)
	{
		cout<<2*x+1<<" "<<k<<"\n";
	}
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

