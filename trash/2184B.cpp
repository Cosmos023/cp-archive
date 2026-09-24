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
	int s,k,m;
	cin >> s>>k>>m;
	if(m<k)
	{
		cout<<max(0,s-m)<<"\n";
		return;
	}
	if(k>=s)
	{
		cout<<max(0,s-m%k)<<"\n";
	}
	else
	{
		int n = m/k;
		if(n%2==0)
		{
			cout<<max(0,s-m%k)<<"\n";
		}
		else
		{
			cout<<max(0,k-m%k)<<"\n";
		}
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

