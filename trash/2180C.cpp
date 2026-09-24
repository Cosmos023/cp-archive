#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, k;
	cin >> n>>k;
	if(k%2)
	{
	 	for(int i=0; i<k; i++)
	 	{
	 		cout << n << " ";
	 	}
	 	cout<<"\n";
	}
	else
	{
		for(int i=0; i<k-1; i++)
	 	{
	 		cout << n << " ";
	 	}
	 	cout<<"0\n";
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