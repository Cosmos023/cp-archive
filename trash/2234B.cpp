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

void solve()
{
	lli n;
	cin >> n;
	for(int i = 0; i<=9; i++)
	{
		if((n-i)%12==0)
		{
			cout<<i<<" "<<n-i<<"\n"; return;
		}
	}
	if(n==10)
	{
		cout<<"-1\n"; return;
	}
	if((n-11)%12==0)
	{
		cout<<11<<" "<<n-11<<"\n"; return;
	}
	if(n<22)
	{
		cout<<"-1\n"; return;
	}
	if((n-22)%12==0)
	{
		cout<<22<<" "<<n-22<<"\n"; return;
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

