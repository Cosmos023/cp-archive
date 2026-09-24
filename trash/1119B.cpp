#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, h;
	cin >> n >> h;
	int a[n+1];
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}

 	int l = 1, u = n;
 	int k=-1;
 	int equal=0;
 	while(l<=u) 
 	{
		int mid = (l+u)/2;
		vector<int> v;
		for(int i = 1; i<=mid; i++)
			v.push_back(a[i]);
		if(v.size()%2==1)
			v.push_back(0);
		sor(v);
		lli he = 0;
		for(int i = 1; i<v.size(); i+=2)
			he+=v[i];
		if(he<=h)
		{
			k = mid;
			l = mid+1;
		}
		else
		{
			u = mid-1;
		}
 	}
 	cout << k;

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