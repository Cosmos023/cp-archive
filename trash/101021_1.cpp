#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int l = 1, r = 1000000;
	while(l!=r)
	{
		int p = (l+r+1)/2;
		cout<<p<<endl;
		string s;
		cin >> s;
		if(s==">=")
		{
			l = p;
		}
		else
			r = p-1;
	}
	cout<<"! "<<l<<endl;
}


