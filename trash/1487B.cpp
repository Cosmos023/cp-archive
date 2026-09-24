#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n,k;
	cin >> n>>k;
	if(n%2==0) cout << (k-1)%n+1<<"\n";
	else if(k==1) cout << "1\n";
	else
	{
		int l = n/2;
		cout<<(((k-1)/l*l)+(k-1)/l+(k-(k-1)/l*l)-1)%n+1<<"\n";
	}
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