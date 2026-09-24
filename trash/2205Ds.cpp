#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
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
	vector<lli> a(n+2, 0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	a[0]=1e6;
 	a[n+1]=1e6;
 	lli ans = 0;
 	int i = 1;
 	while(i<=n)
 	{
 		if(a[i]>a[i-1] && a[i]>a[i+1])
 		{
 		// cout<<ans<<"\n";
	 		int couR = 0;
	 		set<int> couRs;
	 		int couL = 0;
	 		set<int> couLs;
	 		int jR = i+1;
	 		int jL = i-1;
	 		while(a[jR]<a[i])
	 		{
	 			couRs.insert(a[jR]);
	 			jR++;
	 		}
	 		while(a[jL]<a[i])
	 		{
	 			couLs.insert(a[jL]);
	 			jL--;
	 		}
	 		couR = couRs.size();
	 		couL = couLs.size();
	 		// plist1(a,n);
	 		// pL(couLs)
	 		// cout<<couL<<" "<<couR<<"\n";
	 		if(couL>couR)
	 		{
	 			ans+=couR;
 				// if(jR-1<=n)
 					a[jR-1] = a[i];
 					for(int k = i; k<jR; k++) a[k]=a[i];
	 			i = jR;
	 			continue;
	 		}
	 		else if(couL<couR)
	 		{
	 			ans+=couL;
	 			// if(i-1>=1)
	 			{
	 				a[i-1] = a[jL];
 					for(int k = jL; k<i; k++) a[k]=a[jL];
	 			}
	 			i++;
	 			continue;
	 		}
	 		else
	 		{
	 			if(a[jR]>a[jL])
	 			{
	 				ans+=couR;
	 				// if(jR-1<=n)
	 					a[jR-1] = a[i];
 					for(int k = i; k<jR; k++) a[k]=a[i];
	 				i=jR;
	 			}
	 			else
	 			{
	 				ans+=couL;
		 			// if(i-1>=1)
		 			{
		 				a[i-1] = a[jL];
 					for(int k = jL; k<i; k++) a[k]=a[jL];
		 			}
	 				i++;
	 			}
	 		}
 			continue;
 		}
 		else
 		{
 			i++;
 		}
 	}
 	cout<<ans<<"\n";
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