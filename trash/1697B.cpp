#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	int n, q;
	cin >> n >> q;
	lli p[n+1];
	lli ps[n+1];
	p[0]=0;
	ps[0]=0;
	for(int i = 1; i<=n; i++)
	{
		cin >> p[i];
	}
	sort(p,p+n+1);
	for(int i = 1; i<=n; i++)
	{
		ps[i] = ps[i-1]+p[i];
	}
	for(int i = 0; i<q; i++)
	{
		int y, x;
		cin >> x >> y;
		cout << (ps[n-x+y]-ps[n-x]) << "\n";
	}
}