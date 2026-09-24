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
	vector<int> v;
	int i = 0;
	while(i<s.size())
	{
		if(s[i]=='v')
		{
			int p = 0;
			int j = 1;
			while(s[i]==s[i+j])
			{
				if(i+j >= s.size())
					break;
				j++;
			}
			i += j;
			j--;
			if(j>0) v.push_back(j);
		}
		else 
		{
			v.push_back(0);
			i++;
		}
	}
	// plist(v,v.size());
	lli ans = 0;
	vector<lli> ps(v.size()+1,0);
	ps[0] = 0;
	for(int i = 0; i<v.size(); i++)
	{
		ps[i+1] = ps[i]+v[i];
	}
	for(int i = 0; i<v.size();i++)
	{
		if(v[i]==0)
		{
			ans += ps[i+1]*(ps[v.size()]-ps[i+1]);
		}
	}
	cout << ans;
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