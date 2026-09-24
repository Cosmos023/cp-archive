#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int a[n];
	int next[n];
 	for(int i=0; i<n; i++) cin >> a[i];
 	int i = 0;
 	while(i<n)
 	{
 		int k = INT_MAX-10;
 		for(int j = i; j<n; j++)
 		{
 			if(a[i]!=a[j])
 			{
 				k = j;
 				break;
 			}
 		}
 		for(int j = i; j<k; j++)
 		{
 			if(j>=n) break;
 			next[j]=k;
 		}
 		i=k;
 	}
 	// for(int i=0; i<n; i++) cout << next[i] << " ";
 	int q;
 	cin >> q;
 	while(q--)
 	{
 		int l, r;
 		cin >> l>>r;
 		l--; r--;
 		if(next[l]>r) 
 		{
 			cout << "-1 -1\n";
 			continue;
 		}
 		else
 		{
 			cout << l+1 <<" "<< next[l]+1 << "\n";
 		}
 	}
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