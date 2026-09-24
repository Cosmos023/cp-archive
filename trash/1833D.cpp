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
 	for(int i=n; i>0; i--)
 	{
 		cin >> a[i];
 	}

 	int iM = find(a.begin(),a.end(),n)-a.begin();

 	if(a[n]==n)
 	{
 		iM = find(a.begin(),a.end(),n-1)-a.begin();
 	}
 	// cout<<iM<<"\n";

 	int iN = -1;
 	int s;
 	if(iM==1)
 	{
 		s = iM+1;
 	}
 	else
 		s = iM+2;
 	for(int i = s; i<=n; i++)
 	{
 		if(a[i]<a[n])
 		{
 			iN = i;
 			break;
 		}
 	}
 	reverse(next(a.begin(),1),next(a.begin(),iM+1));
 	if(iN!=-1)
 		reverse(next(a.begin(),iN),a.end());
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

