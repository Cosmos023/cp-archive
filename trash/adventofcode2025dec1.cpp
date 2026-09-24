#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ans = 0;
	int n = 50;
	while(1)
	{
		string s;
		cin >> s;
		if(!size(s))
			break;
		// cout << s << "\n";
		int k = stoi(s.substr(1));
		
		for(int i = 0; i<k; i++)
		{
			if(s[0]=='L')
				n-=1;
			else
				n+=1;
			if(n%100==0)
				ans++;
		}
		n = n%100;
	}
	cout << ans;
}