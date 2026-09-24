#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

int main()
{
	lli n, m, a, b;
	cin >> n>>m;
	lli max = (n-m+1)*(n-m)/2;
	lli k = n/m;
	lli w = n-k*m;
	lli min = 0;
	for(int i = 0; i<m; i++) 
	{
		if(w>0)
		{
			min += (k+1)*(k)/2;
			w--;
		}
		else
		{
			min += k*(k-1)/2;
		}
	}
	cout << min << " " << max;
}