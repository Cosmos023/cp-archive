#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	lli ans = 0;
	while(1)
	{
		string s;
		cin >> s;
		if(!size(s))
			break;
		int hs[size(s)];
		for(int i = 0; i<size(s);i++) hs[i]=0;
		int w = size(s)-11;
		for(int i = 0; i<size(s);i++)
		{
			int c = 0;
			for(int i = 0; i<size(s);i++) 
			{
				if(hs[i]==1) c++;
			}
			if(c>=12) break;

			int k = i-1;
			for(int j = (i); j<(i+w); j++)
			{
				if(hs[j]==1){
					k = j;
					// cout << "i " << i << " k " << k << "\n";
				}
			}
			int mi = k+1;
			for(int j = (k+1); j<(i+w); j++)
			{
				if(hs[j]==1) continue;
				if(j>=size(s)) break;
				if(s[j]>s[mi])
				{
					mi = j;
				}
			}
			hs[mi]=1;
		}
		// cout << m << " ";

		lli m = 0;
		for(int i = 0; i<size(s);i++)
		{
			if(hs[i]==1)
			{
				// cout << i << " " << m << "\n";
				m = m*10+s[i]-'0';
			}
		}
		// cout << m << " ";
		ans+=m;
	}
	cout << ans;
}