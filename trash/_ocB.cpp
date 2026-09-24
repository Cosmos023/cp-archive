#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	lli n,a,b;
	cin >> n>>a>>b;
	string s;
	cin >> s;
	int n0 = 0, n1 = 0;
	for(char c:s)
	{
		if(c=='1') n1++;
		else n0++;
	}
	if(n1==0||n0==0)
	{
		cout<<"0\n";
		return;
	}
	lli c1 = a*min(n0,n1);
	lli c2 = b*n0;
	// lli c3 = n1/2*b;
	lli c3 = 0;
	lli m = INT_MAX;
	for(int i = n1; i>=0; i--)
	{
		c3 = (n1-i)*a;
		if(i%2==1)
		{
			c3 += a;
			c3 += (i/2*b);
		}
		else
		{
			c3 += (i/2*b);
		}
		m = min(m, c3);
	}
	cout<<min(c1,min(c2,m))<<"\n";
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

