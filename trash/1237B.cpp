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
	int b[n];
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	map<int,int> exit;
 	for(int i=0; i<n; i++)
 	{
 		cin >> b[i];
 		exit[b[i]] = i;
 	}

 	int last = -1;
 	int ans = 0;
 	for(int i=0; i<n; i++)
 	{
 		if(exit[a[i]]<last)
 		{
 			ans++;
 		}
 		else
 			last = exit[a[i]];
 	}
 	cout << ans;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--) 
	{
		solve();
	}
}