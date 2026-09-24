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
	int n,k;
	cin >> n>>k;
	string s;
	cin >> s;
	bool isp = true;
	for(int i = 0; i<n/2; i++)
	{
		if(s[i]!=s[n-1-i])
		{
			isp = false;
			break;
		}
	}
	if(k==0)
	{
		cout<<"1\n";
		return;
	}
	if(!isp)
	{
		cout<<2<<"\n";
	}
	else
	{
		cout<<"1\n";
	}
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

