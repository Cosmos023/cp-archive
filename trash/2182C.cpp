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
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<n; i++) cin >> b[i];
 	for(int i=0; i<n; i++) cin >> c[i];
 	lli c1 = 0, c2 =0;
 	for(int i = 0; i<n; i++)
 	{
 		int k = 1;
 		for(int j = 0; j<n; j++)
 		{
 			if(b[(j+i)%n]<=a[j])
 			{
 				k=0;
 				break;
 			}
 		}
 		if(k)
 		{
 			c1++;
 		}
 	}
 	for(int i = 0; i<n; i++)
 	{
 		int k = 1;
 		for(int j = 0; j<n; j++)
 		{
 			if(c[(j+i)%n]<=b[j])
 			{
 				k=0;
 				break;
 			}
 		}
 		if(k)
 		{
 			c2++;
 		}
 	}
 	cout<<n*c1*c2<<"\n";
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