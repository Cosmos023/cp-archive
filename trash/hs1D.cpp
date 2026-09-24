#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	string x;
	string y;
	cin >> x >> y;
	if(x==y)
	{
		cout<<x<<"\n";
		cout<<y<<"\n";
		return;
	}
	if(x<y)
		swap(x,y);
	int n = x.size();
	for(int i = 1; i<n; i++)
	{
		if(x[i]>y[i])
		{
			swap(x[i],y[i]);
		}
		if(x<y)
		{
			swap(x,y);
		}
	}
	// if(x<y)
	// {
	// 	swap(x,y);
	// }
	cout<<x<<"\n";
	cout<<y<<"\n";
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