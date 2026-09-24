#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	int a[n];
	lli sum = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		sum += a[i];
 	}
 	lli cursum = 0;
 	lli maxsum = INT_MIN;
 	int temp_l = 0;
 	int l = 0;
 	for(int i=0; i<n; i++)
 	{
 		// cursum = max(1LL*a[i], cursum+a[i]);
 		if(cursum+a[i]<=a[i])
 		{
 			temp_l = i;
 			cursum = a[i];
 		}
 		else
 			cursum += a[i];

 		if(maxsum<=cursum)
 		{
 			l = temp_l;
 			maxsum = cursum;
 		}
 	}
 	// cout << l << " " << temp_l << "\n";
 	lli s = 0;
 	int no = 0;
 	for(int i = l; i<n; i++)
 	{
 		if(s==maxsum && i!=(n-1)) n=1;
 		s+=a[i];
 	}

 	if(sum>maxsum || (l==0 && s==maxsum && !no))
 		cout << "YES\n";
 	else
 		cout << "NO\n";
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