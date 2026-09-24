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
	vector<int> a(s.size());
	int c = 0;
	int minc = 0;
	map<int,int> mp;
	for(int i = 0; i<s.size();i++)
	{
		if(s[i]=='-')
			c--;
		else
			c++;
		a[i] = c;
		minc = min(minc, c);
		if(c<0)
		{
			if(!mp.count(-c))
			{
				mp[-c]=i;
			}
		}
	}
	// plist(a,a.size());
	minc = -minc;
	// cout<<minc<<"\n";
	lli res = s.size();
	for(int i = 0; i<minc; i++)
	{
		res += (mp[i+1]+1);
	}
	cout<<res<<"\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}