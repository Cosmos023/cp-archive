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
	cin >> s;
	vector<int> v;
	s = '!'+s;
	for(int i = 1 ; i<=n; i++)
	{
		if(s[i]=='1') v.push_back(i);
	}
	if(v.size()==0)
	{
		cout<<"YES\n"; 
		for(int i = n; i>=1; i--)
			cout<<i<<" ";
		cout<<"\n";
		return;
	}
	if(v.size()==n)
	{
		cout<<"YES\n"; 
		for(int i = 1; i<=n; i++)
			cout<<i<<" ";
		cout<<"\n";
		return;
	}
	if(v[0]==2 || v.back()==(n-1))
	{
		cout<<"NO\n"; 
		return;
	}


	for(int i = 1; i<v.size();i++)
	{
		if(v[i]-v[i-1]==2)
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	int p = 0;
	for(int i = 0; i<v.size(); i++)
	{
		for(int j = v[i]-1; j>p; j--)
		{
			cout<<j<<" ";
		}
		cout<<v[i]<<" ";
		p=v[i];
	}
	for(int j = n; j>=p+1; j--) cout<<j<<" ";
	cout<<"\n";
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