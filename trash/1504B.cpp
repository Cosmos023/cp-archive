#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int x[n+2];
	int y[n+1];
	string as, bs;
	cin >> as >> bs;
	int n0 = 0, n1 = 0;
 	for(int i=0; i<n; i++) 
 	{
 		x[i+1] = 1-((as[i]-'0')^(bs[i]-'0'));
 		if(as[i]=='0') n0++;
 		if(as[i]=='1') n1++;
 		if(n0==n1)
 			y[i+1] = 1;
 		else y[i+1] = 0;
 	}
 	y[0]=1;
 	x[n+1]=2;
 	// plist1(x,n); plist(y,n+1);
 	int ans = 1;
 	for(int i = 1; i<=n; i++)
 	{
 		int j = i;
 		if(x[i]==0)
 		{
	 		while(x[i]==x[j])j++;
	 		if(y[i-1]!=1 || y[j-1]!=1) 
	 		{
	 			ans = 0;
	 		}
	 		i = j-1;
	 	}
 	}
 	if(ans) cout << "YES\n";
 	else cout << "NO\n";
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