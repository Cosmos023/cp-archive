#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	lli n, k;
	cin >> n>>k;
	lli i1 = 1;
	int m1;
	while(i1>0)
	{
		m1 = i1*(i1-1)/2;
		if(m1>=k) break;
		i1++;
	}
	i1--; m1 = i1*(i1-1)/2;
	// cout<<i1;
	int i2=k-m1-1;
 	for(int j=n-1; j>=0; j--)
 	{
 		if(j==i1 || j==i2)
 			cout << "b";
 		else
 			cout << "a";
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