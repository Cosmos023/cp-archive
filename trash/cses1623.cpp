#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	vector<int> p(n);
	for(int i = 0; i<n; i++) cin>>p[i];
	long long int num = LLONG_MAX;
	for(int i = 0; i<(1<<n); i++)
	{
		long long int x1=0, x2=0;
		int m =0;
		for(int k = 0; k<n; k++)
		{
			if((i>>k)&1) x1+=p[m]; else x2+=p[m];
			m++;
		}
		num = min(num, abs(x1-x2));
	}
	cout<<num;
}