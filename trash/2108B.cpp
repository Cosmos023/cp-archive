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
	lli n, x;
	cin >> n >> x;
	int c = __builtin_popcountll(x);
	if(c==0)
	{
		if(n%2) 
		{
			if(n<3)
				cout<<"-1\n";
			else
			{
				cout<<(n-3)+6<<"\n";
			}
		}
		else cout<<n<<"\n";
		return;
	}
	if(n<c)
	{
		cout<<x<<"\n";
		return;
	}
	if(n-c>=0)
	{
		if((n-c)%2==1) c--;
		if(c==0)
		{
			if(x==1)
			{
				cout<<(n-2)+5<<"\n";
			}
			else
				cout<<(n-2)+x+2<<"\n";
			return;
		}
		cout<<(n-c)+x<<"\n";
		return;
	}
	cout<<"-1\n";
	return;
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