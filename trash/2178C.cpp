#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

// void attack(vector<int>a, h, x, y)
// {

// }

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> h(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		h[i] = a[i];
 	}
 	sor(a);
 	sor(h);
 		plist(h, n);
 	for(int i = 0; i<n/2; i++)
 	{
 		h[i] -= a[n-i-1];
 		h[n-i-1] -= a[i];
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