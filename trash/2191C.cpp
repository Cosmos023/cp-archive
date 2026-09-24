#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
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
	int n0 = 0, n1 = 0;
	// if(n==1)
	// {
	// 	cout<<"Alice\n";
	// }
	for(char c:s)
	{
		if(c=='0') n0++;
		else n1++;
	}
	if(n0==0 || n1==0)
	{
		cout<<"Bob\n";
		return;
	}
	vi ans;
	for(int i = 0; i<n0; i++)
	{
		if(s[i]=='1') ans.push_back(i+1);
	}
	for(int i = n0; i<n; i++)
	{
		if(s[i]=='0') ans.push_back(i+1);
	}
	if(ans.size()==0)
	{
		cout<<"Bob\n";
		return;
	}
	cout<<"Alice\n";
	cout<<ans.size()<<" ";
	pL(ans);
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

