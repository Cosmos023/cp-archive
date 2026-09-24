#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n,l,r;
	cin >> n>>l>>r;
	int a[n+1];
 	for(int i=1; i<l; i++) a[i]=i^(i+1);
 	for(int i=l; i<r; i++) a[i]=i^(i+1);
 	a[r] = r^l;
 	if((r+1)<=n)
 		a[r+1] = (r+1)^l;
 	for(int i=r+2; i<=n; i++) a[i]=(i-1)^(i);

 	for(int i=1; i<=n; i++) 
 	{
 		cout << a[i] << " ";
 	}
 	cout << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}