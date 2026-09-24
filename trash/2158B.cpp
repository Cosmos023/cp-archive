#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

int a[400009];

void solve()
{
	int n;
	cin >> n;
	for(int i = 0; i<400009; i++)
		a[i]=0;
	for(int i = 0; i<2*n; i++)
	{
		int x;
		cin >> x;
		a[x]++;
	}
	int ans = 0;
	// for(int i = 1; i<=2*n; i++)
	// {
	// 	if(a[i]%2==1)
	// 		ans++;
	// 	else if(a[i]%2==0 && a[i]>1)
	// 		ans+=2;
	// }
	int nx = 0, ny = 0, n1 = 0;
	sort(a+1,a+2*n+1);
	for(int i = 2*n; i>=1; i--)
	{
		if(a[i]==0) break;
		if(a[i]%2==1)
		{
			n1++;
			if(nx<ny)
			{
				nx += (a[i]/2+1);
				ny += (a[i]/2);
				ans++;
			}
			else
			{
				ny += (a[i]/2+1);
				nx += (a[i]/2);
				ans++;
			}
		}
		else
		{
			if(a[i]%4==0)
			{
				if(nx<ny)
				{
					nx += (a[i]/2+1);
					ny += (a[i]/2-1);
					ans+=2;
				}
				else
				{
					ny += (a[i]/2+1);
					nx += (a[i]/2-1);
					ans+=2;
				}
			}
			else
			{
				nx += a[i]/2;
				ny += a[i]/2;
				ans += 2;
			}
		}
	}
	if(nx>n || ny>n)
	{
		if(n1==0)
			ans-=2;
	}
	// cout << nx << " " << ny << " " << ans << "\n";
	cout << ans << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}