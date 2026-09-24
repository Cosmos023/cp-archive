#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x2 = 0, x5 = 0;
	int k = 1;
	while(1)
	{
		int i2 = n/pow(2,k), i5 = n/pow(5,k);
		if(i2==0 && i5==0)
			break;
		x2+=i2;
		x5+=i5;
		k++;
	}
	cout << min(x2,x5) << "\n";
}