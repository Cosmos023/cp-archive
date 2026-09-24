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
	int n;
	cin >> n;
	vector<int> a(4*n+1);
	if(n%2)
	{
		a[1]=a[2]=a[4]=a[7]=1;
		a[3]=a[5]=a[9]=a[10]=2;
		a[6]=a[8]=a[11]=a[12]=3;
		int k = 4;
		for(int i = 12; i<4*n; i+=8)
		{
			a[i+1]=a[i+3]=a[i+4]=a[i+7]=k;
			a[i+2]=a[i+5]=a[i+6]=a[i+8]=k+1;
			k+=2;
		}
		pL1(a,4*n);
	}
	else
	{
		int k = 1;
		for(int i = 0; i<4*n; i+=8)
		{
			a[i+1]=a[i+3]=a[i+4]=a[i+7]=k;
			a[i+2]=a[i+5]=a[i+6]=a[i+8]=k+1;
			k+=2;
		}
		pL1(a,4*n);
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

