#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<lli> ps(n+1, 0);
	vector<int> count1(n+1, 0);
	vector<int> count2(n+1, 0);
	vector<int> count3(n+1, 0);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		ps[i+1] = ps[i]+a[i];
 	}

 	// plist(ps, n+1);
 	lli k3 = ps[n];
 	lli k2 = 2*ps[n]/3;
 	lli k1 = ps[n]/3;
 	if(k3%3!=0 || n<3)
 	{
 		cout<<"0\n";
 		return;
 	}
 	if(k3==0)
 	{
 		lli c = 0;
		for(int i = 1; i<=n; i++) 
		{
			if(ps[i]==0)c++;
		}
		cout<<((c-1)*(c-2)/2);
 		return;
 	}
 	int c1=0,c2=0,c3=0;
 	for(int i = 1; i<=n; i++) 
 	{
 		if(ps[i]==k1) c1++;
 		if(ps[i]==k2) c2++;
 		if(ps[i]==k3) c3++;
 		count1[i]=c1;
 		count2[i]=c2;
 		count3[i]=c3;
 	}
 	// plist(count1,n+1);
 	// plist(count2,n+1);
 	// plist(count3,n+1);
 	lli ans = 0;
 	for(int i = 1; i<=n; i++) 
 	{
 		if(ps[i]==k2)
 		{
 			ans+=(1LL*count1[i]);
 		}
 	}
 	cout<<ans;
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