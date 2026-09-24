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
	vector<int> a(n);
	int n1 = 0;
	int n0 = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		if(a[i]==1) n1++;
 		if(a[i]==0) n0++;
 	}
 	if(n0==0)
 	{
 		cout<<"NO\n";
 		return;
 	}
 	if(n0==1)
 	{
 		cout<<"YES\n";
 		return;
 	}
 	if(n1!=0) 
 	{
 		cout<<"YES\n";
 	}
 	else
 		cout<<"NO\n";
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

