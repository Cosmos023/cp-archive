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
	vector<int> a(n);
	vector<lli> b(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=0; i<n; i++) cin >> b[i];

 	sor(a);
 	a.push_back(INT_MAX);
 	for(int i=1; i<n; i++) b[i] = b[i]+b[i-1];

 	int c = 0;
 	int x = a[0];
 	int sw=-1;
 	lli ans = -1;
 	sw = a.end()-lower_bound(a.begin(),a.end(),x)-1; 
 	while(sw>0 && c<n)
 	{
 		int k = upper_bound(b.begin(),b.end(),sw)-b.begin();
 		// k++;
 		// cout<<sw<<" "<<k<<" "<<x<<"\n";
 		ans = max(ans, 1LL*k*x);
 		c++;
 		x = a[c];
 		sw = a.end()-lower_bound(a.begin(),a.end(),x)-1; 
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

