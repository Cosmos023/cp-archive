#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
 
int comp(string s1, string s2)
{
	if(s1.size()>s2.size())
	{
		return 1;
	}
	if(s1.size()<s2.size())
	{
		return -1;
	}
	return s1.compare(s2);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	lli n;
	cin >> n;
	string s = to_string(n);
	char db[][11] = {"47","4477","444777","44447777","4444477777"};
	int l = s.size();
	for(int i = 0; i<5; i++)
	{
		if(comp(s,db[i])<=0)
		{
			cout << db[i];
			return 0;
		}
		while(next_permutation(db[i],db[i]+2*(i+1)))
		{
			if(comp(s,db[i])<=0)
			{
				cout << db[i];
				return 0;
			}
		}
	}
}