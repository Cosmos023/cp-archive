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
	int a[n];
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	vector<int> v;
 	v.push_back(a[0]);
 	for(int i=1; i<n-1; i++)
 	{
 		if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]>a[i-1]&&a[i]>a[i+1]))
 		{
 			v.push_back(a[i]);
 		}
 	}
 	v.push_back(a[n-1]);
 	cout<<v.size()<<"\n";
 	plist(v,v.size());
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