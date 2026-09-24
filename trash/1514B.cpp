#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n, k;
	cin >> n>>k;
 	lli ans = 1;
 	for(int i=0; i<k; i++)
 	{
 		ans = (ans*n)%(1000000007); 
 	}
 	cout << ans <<endl;
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