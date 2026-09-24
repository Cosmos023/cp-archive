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
	vector<int> a(n+1,0);
	vector<int> h(n+1,0);
	vector<int> ps(n+1,0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		ps[i] = ps[i-1]+a[i];
 	}
 	for(int i=1; i<=n; i++) cin >> h[i];



 	vector<pair<int,int>> vp;
 	int i = 1;
 	while(i<=n)
 	{
 		int c = 1;
 		while(i+c<=n && h[i+c-1]%h[i+c]==0) c++;

 		vp.push_back({i, i+c-1});
 		i += c;
 	}

 	int ans = 0;
 	for(auto p:vp)
 	{
 		// cout<<p.first<<" "<<p.second<<"\n";
 		int start = p.first, end = p.second;
 		// // int L = end-start+1;
 		// while(start<=end && (ps[end]-ps[start-1])>k)
 		// {
 		// 	if(a[start]>a[end]) start++;
 		// 	else if(a[start]<a[end]) end--;
 		// 	if(a[start]==a[end])
 		// 	{
 		// 		int l = start, r=end;
 		// 		while(r>start && l<end && l<r && a[l]==a[r]){l++;r--;}
 		// 		if(a[l]>=a[r]) start++;
 		// 		else end--;
 		// 	}
 		// 	// L = end-start+1;
 		// }
 		// if((ps[end]-ps[start-1])<=k) ans = max(ans, end-start+1);


 		auto m = upper_bound(next(a.begin(),start),next(a.begin(),end+1), k+ps[start-1]);
 		
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
