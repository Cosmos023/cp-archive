#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int


int l,r,temp_l;
lli maxsub(lli a[], int n)
{
	lli cursum = a[0], maxsum = a[0];
	l = 0; r = 0; temp_l = 0;
	for(int i = 1; i<n; i++)
	{
		if(cursum+a[i] < a[i])
		{
			temp_l = i;
		}
		cursum = max(cursum+a[i], a[i]);
		if(cursum>=maxsum)
		{
			l = temp_l;
			r = i;
			maxsum = cursum;
		}
	}
	return maxsum;
}

void solve()
{
	int n, k;
	cin >> n >> k;
 	lli a[n];
 	lli b[n];
 	cin >> a[0];
 	int maxa = 0;
 	for(int i = 1; i<n; i++)
 	{
 		cin >> a[i];
 		if(a[i]>a[maxa])
 			maxa = i;
 	}
 	cin >> b[0];
 	int maxb = 0;
 	for(int i = 1; i<n; i++)
 	{
 		cin >> b[i];
 		if(b[i]>b[maxb])
 			maxb = i;
 	}
 	if(k%2==0)
 	{
 		cout << maxsub(a, n) << "\n";
 		return;
 	}

 	lli m = maxsub(a, n);
 	int mb = l;
 	for(int i = l+1; i<=r; i++)
 	{
 		if(b[i]>b[mb])
 			mb = i;
 	}
 	a[maxb] += b[maxb];
 	lli M = maxsub(a, n);
 	cout << max(m+b[mb],M) << "\n";

}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}