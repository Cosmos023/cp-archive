#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

int main()
{
	lli n, m, a, b;
	cin >> n>>m>>a>>b;
	lli k = LONG_MAX;
	int x = n;
	while(x+1)
	{
		lli y = ceil(((double)n-x)/m);
		k = min(k, (x*a+b*y));
		// if((n-x)%m==0)
		// {
		// 	k = min(k, (x*(m*a-b)+b*n)/m);
		// }
		x--;
	}
	cout << k;
}