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
	if(n==k)
	{
		cout<<"0\n";
		return;
	}
	vector<int> a(2,-1);
	if(n%2==0)
	{
		a[0] = a[1] = n/2;
	}
	else
	{
		a[0] = n/2;
		a[1] = n/2+1;
	}
	int ans = 1;
 	while(a[0]>=k || a[1]>=k)
 	{
 		if(a[0]==k || a[1]==k)
 		{
 			cout<<ans<<"\n";
 			return;
 		}
 		if(a[0]==a[1])
 		{
 			if(a[0]%2==0)
 			{
 				a[0] /= 2;
 				a[1] = a[0];
 			}
 			else
 			{
 				a[0] /= 2;
 				a[1] = a[0]+1;
 			}
 		}
 		else
 		{
 			if(a[0]%2==1) swap(a[0],a[1]);
 			a[0] /= 2;
 			a[1] = a[0]+1;
 		}
 		ans++;
 	}
 	cout<<"-1\n";
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

