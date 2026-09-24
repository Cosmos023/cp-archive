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

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	int c=0;
 	vi v1, v2;
 	v1.push_back(INT_MAX);
 	v2.push_back(INT_MAX);
 	for(int i=0; i<n-1; i++) 
 	{
 		if(a[i]<a[i+1]) c++;
 	}
 	for(int i=0; i<n; i++)
 	{
 		if(*v1.rbegin()>=a[i] && *v2.rbegin()<a[i])
 		{
 			v1.push_back(a[i]); continue;
 		}
 		if(*v1.rbegin()<a[i] && *v2.rbegin()>=a[i])
 		{
 			v2.push_back(a[i]); continue;
 		}
 		if(*v1.rbegin()<=a[i] && *v2.rbegin()<=a[i])
 		{
 			if(*v1.rbegin() >= *v2.rbegin())
 			{
 				v2.push_back(a[i]); continue;
 			}
 			else
 			{
 				v1.push_back(a[i]); continue;
 			}
 		}

 		if(*v1.rbegin()>a[i] && *v2.rbegin()>a[i])
 		{
 			if(*v1.rbegin() >= *v2.rbegin())
 			{
 				v2.push_back(a[i]); continue;
 			}
 			else
 			{
 				v1.push_back(a[i]); continue;
 			}
 		}
 	}
 	int x = 0;
 	for(int i=1; i<v1.size()-1; i++) 
 	{
 		if(v1[i]<v1[i+1]) x++;
 	}
 	for(int i=1; i<v2.size()-1; i++) 
 	{
 		if(v2[i]<v2[i+1]) x++;
 	}
 	// pL(v1);
 	// pL(v2);
 	cout<<min(c,x)<<"\n";
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

