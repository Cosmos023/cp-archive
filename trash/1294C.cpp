#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	int y = 0;
	int i = 2;
	while(i*i*i<n)
	{
		if(n%i==0)
		{
			n = n/i;
			y = 1;
			break;
		}
		i++;
	}
	if(!y)
	{
		cout << "NO\n";
		return;
	}

	int j = i+1;
	y = 0;
	while(j*j<n)
	{
		if(n%j==0)
		{
			n = n/j;
			y = 1;
			break;
		}
		j++;
	}
	if(!y)
	{
		cout << "NO\n";
		return;
	}

	// if(i!=j && i!=n && j!=n)
	{
		cout << "YES\n";
		cout << i << " " << j << " " << n << "\n";
	}
	// else
		// cout << "NO\n";
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