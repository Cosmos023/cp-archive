#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3];
	cin >> a[0];
	cin >> a[1];
	cin >> a[2];
	sort(a,a+3);
	if(a[2]-a[0] >= 10)
	{
		cout << "check again";
	}
	else
	{
		cout << "final " << a[1];
	}
}