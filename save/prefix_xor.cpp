#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p = 0;
	for(int i = 1; i<100; i++)
	{
		p^=i;
		cout<<p<<"\n";
	}
}