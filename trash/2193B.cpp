#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	int i = 1;
 	for(; i<=n; i++)
 	{
 		if(a[i]!=n-i+1)
 		{
 			break;
 		}
 	}
 	int j = i;
 	for(; j<=n; j++)
 	{
 		if(a[j]==n-i+1)
 		{
 			break;
 		}
 	}
 	reverse(next(a.begin(),i),next(a.begin(),j+1));
 	plist1(a,n);
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

