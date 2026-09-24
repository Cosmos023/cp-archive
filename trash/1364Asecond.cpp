#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, x;
	cin >> n >> x;
	lli sum = 0;
	int d = 1;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		int c;
 		cin >> c;
 		if(c%x)
 			d = 0;
 		sum += c;
 		a[i] = c;
 	}
 	if(d)
 	{
 		cout<<"-1\n";
 		return;
 	}
 	if(sum%x!=0)
 	{
 		cout<<n<<"\n";
 		return;
 	}
 	for(int i = 0; i<n; i++)
 	{
 		if(a[i]%x)
 		{
 			cout<<(n-i-1)<<"\n";
 			return;
 		}
 		if(a[n-i-1]%x)
 		{
 			cout<<(n-i-1)<<"\n";
 			return;
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