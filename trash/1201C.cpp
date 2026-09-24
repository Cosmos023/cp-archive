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
 	if(n==1)
 	{
 		cout<<a[0]+k<<"\n";
 		return;
 	}
 	sor(a);
 	int m = n/2;
 	int M = a[n-1]; 
 	vl d;
 	d.push_back(a[m+1]-a[m]);
 	for(int i = m+1; i<n-1; i++)
 	{
 		d.push_back(d.back()+(i-m+1)*(a[i+1]-a[i]));
 	}
 	auto it = upper_bound(d.begin(), d.end(), k);
 	if(it == d.begin())
 	{
 		cout<<a[m]+k<<"\n";
 		return;
 	}
 	it--;
 	k -= (*it);
 	// pL(d);
 	int l = (it-d.begin()+2);
 	cout<<a[(it-d.begin()+1+m)]+k/l<<"\n";
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