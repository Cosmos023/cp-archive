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
	int n, k;
	cin >> n >> k;
	vector<lli> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	sor(a);
 	if(k>=3)
 	{
 		cout<<"0\n";
 		return;
 	}
 	for(int i = 1; i<n; i++)
 	{
 		if(a[i]==a[i-1])
 		{
 			cout<<"0\n";
 			return;
 		}
 	}

 	lli m = *min_element(a.begin(),a.end());

 	if(k==2)
 	{
 		lli ans = LLONG_MAX;
 		for(int i = 0; i<n; i++)
 		{
 			for(int j = 0; j<n;j++)
 			{
 				if(i==j) continue;
 				ans = min(ans, abs(a[i]-a[j]));
 				int lb = lower_bound(a.begin(),a.end(), abs(a[i]-a[j]))-a.begin();
 				ans = min(ans, abs(a[lb]-abs(a[i]-a[j])));
 				if(lb>0)
 					ans = min(ans, abs(a[lb-1]-abs(a[i]-a[j])));
 				// if(binary_search(a.begin(),a.end(),abs(a[j]-a[i])))
 				// {
 				// 	cout<<"0\n";
 				// 	return;
 				// }
 			}
 		}
 		cout<<min(ans,m)<<"\n";
 	}


 	if(k==1)
 	{
 		lli ans = LLONG_MAX;
 		for(int i = 0; i<n; i++)
 		{
 			for(int j = i+1; j<n;j++)
 			{
 				ans = min(ans,abs(a[i]-a[j]));
 			}
 		}
 		cout<<min(ans,m)<<"\n";
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

