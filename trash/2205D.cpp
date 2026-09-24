#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+2);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	a[0]=a[n+1]=INT_MAX;
 	int c = 0;
 	int i = 1;
 	while(i<=n)
 	{
 		if(a[i]>a[i-1] && a[i]>a[i+1])
 		{
	 		int j = i+1;
	 		while(a[j]<a[i])
	 		{
	 			c++;j++;
	 		}
 			i=j;
 			continue;
 		}
 		else
 			i++;
 	}
 	int c1 = 0;
 	i = n;
 	while(i>=1)
 	{
 		if(a[i]>a[i-1] && a[i]>a[i+1])
 		{
	 		int j = i-1;
	 		while(a[j]<a[i])
	 		{
	 			c1++;j--;
	 		}
 			i=j;
 			continue;
 		}
 		else
 			i--;
 	}
 	cout<<min(c,c1)<<"\n";
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

