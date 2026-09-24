#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	string s;
	cin>>s;
	int n0 = 0;
	vector<int> ans;
	for(int i = 0; i<s.size();i++)
	{
		if(s[i]=='0')
		{
			n0++;
			ans.push_back(i+1);
		}
	}
	cout<<n0<<"\n";
	plist(ans,n0);
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