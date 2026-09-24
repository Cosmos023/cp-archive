#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	string s;
	cin >> s;
	// s+="0";
	vector<int> v;
	int i = 0;
	while(i<s.size())
	{
		int k = 1; 
		while(s[i]==s[i+k]) k++;

		for(int j = i+1; j<i+k; j+=2)
		{
			if(s[j]!='z')
			{
				if(s[i+k]!=s[i]+1)
					s[j] = s[i]+1;
				else
				{
					if(s[i]+2 <= 'z')
						s[j] = s[i]+2;
					else
						s[j] = 'a';
				}
			}
			else
			{
				if(s[i+k]!='a')
					s[j] = 'a';
				else
					s[j] = 'b';
			}
		}

		v.push_back(k);
		i += k;
	}
	cout << s;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--) 
	{
		solve();
	}
}