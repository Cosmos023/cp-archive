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
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		a[i] %= k;
 		a[i] = (k-a[i])%k;
 	}
 	sor(a);
 	// pL(a);
 	a.push_back(-1);
 	int i = 0;
 	for(i = 0; i<n; i++)
 	{
 		if(a[i]!=0) break;
 	}
 	int not_0 = n-i;
 	if(not_0==0)
 	{
 		cout<<"0\n";
 		return;
 	}
 	int j = i;
 	int M = 0;
 	int c = 0;
 	while(j<n)
 	{
 		int m = j;
 		while(a[m]==a[j]) m++;
 		if(m-j>=M)
 		{
 			M = m-j;
 			c = j;
 		}
 		j = m;
 	}
 	// cout<<c<<" "<<M<<endl;
 	// cout<<(M-1)*k<<"\n";
 	cout<<1LL*(M-1)*k+a[c]+1<<"\n";
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