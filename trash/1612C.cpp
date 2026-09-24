#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	lli k,x;
	cin >> k>>x;
	lli h = k*(k+1)/2;
	if(h>=x)
	{
		lli lb = 1;
		lli ub = k;
		lli j = 1;
		while(lb<=ub)
		{
			lli m = (lb+ub)/2;
			if(m*(m+1)/2<=x)
			{
				j = m;
				lb = m+1;
			}
			else
			{
				ub=m-1;
			}
		}
		if(j*(j+1)/2!=x)
			j++;
		// cout<<j<<" "<<k<<"\n";
		cout<<j<<"\n";
		return;
	} 
	else
	{
		lli d = x-h;
		lli lb = 1;
		lli ub = k-1;
		lli j = 0;
		while(lb<=ub)
		{
			lli m = (lb+ub)/2;
			if(m*(2*k-m-1)/2<=d)
			{
				j = m;
				lb = m+1;
			}
			else
			{
				ub=m-1;
			}
		}
		if(j*(2*k-j-1)/2!=d)
			j++;
		cout<<min(2*k-1,j+k)<<"\n";
		return;
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