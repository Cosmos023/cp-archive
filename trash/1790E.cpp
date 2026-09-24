#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	lli x;
	cin >> x;
	if(x%2==1)
	{
		cout<<"-1\n"; return;
	}
	lli n1 = x, n2 = 0;
	for(int i = 30; i>=0; i--)
	{
		if((n1&(1<<i))!=0 || (n2&(1<<i))!=0) continue;
		lli m1 = (n1|(1<<i));
		lli m2 = (n2|(1<<i));
		if((m1+m2)/2 == x)
		{
			cout<<m1<<" "<<m2<<"\n";
			return;
		}
		else if((m1+m2)<2*x)
		{
		// cout<<m1<<" "<<m2<<endl;
			n1=m1; n2=m2;
		}
	}
	cout<<"-1\n";
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

