#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c5=0,c6=0;
	for(int i = 0; i<n-3; i++)
	{
		// cout<<s.substr(i, 4)<<"\n";
		if(s.substr(i, 4)=="2026")
		{
			cout<<"0\n";
			return;
		}
		if(s.substr(i, 4)=="2025")
		{
			c5++;
		}
	}
	
	if(c5)
	{
		cout<<"1\n";
		return;
	}
		cout<<"0\n";
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