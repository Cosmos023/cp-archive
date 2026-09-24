#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<string> vs;

	string x;
	cin >> x;
	string sd = "..";
	int l = x.size();
	for(int i = 0 ; i < l; i++) sd+=".";
	vs.push_back(sd);
	vs.push_back("."+x+".");
	while(1)
	{
		string s;
		cin >> s;
		if(!size(s))
			break;
		vs.push_back("."+s+".");
	}
	int ans = 0;	
	vs.push_back(sd);
	int rem2=-1, rem1=-1;
	while(1)
	{
		rem1=0;
		for(int i = 1; i<vs.size()-1; i++)
		{
			// cout << vs[i] << "\n";
			int c = 0;
			for(int j = 1; j<=l; j++)
			{
				c = 0;
				if(vs[i][j]=='.') continue;
				if(vs[i][j-1]=='@') c++;
				if(vs[i][j+1]=='@') c++;
				if(vs[i-1][j-1]=='@') c++;
				if(vs[i-1][j]=='@') c++;
				if(vs[i-1][j+1]=='@') c++;
				if(vs[i+1][j-1]=='@') c++;
				if(vs[i+1][j]=='@') c++;
				if(vs[i+1][j+1]=='@') c++;
				// cout << c;
				// cout << c << " ";
				if(c<4) 
				{
					ans++;
					rem1++;
					vs[i][j] = '.';
				}
			}
			// cout << "\n";
		}
		if(rem1==rem2) break;
		else rem2=rem1;
	}
	cout << ans;	
}