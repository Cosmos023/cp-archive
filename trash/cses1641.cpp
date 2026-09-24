#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<pair<int,int>> a(n);
 	for(int i=0; i<n; i++)
 	{
 		int c;
 		cin >> c;
 		a[i] = {c, i};
 	}
 	sor(a);
 	for(int i=0; i<n-2; i++)
 	{
 		int p = i+1;
 		int q = n-1;
 		while(p<q)
 		{
 			if(a[p].first+a[q].first == x-a[i].first)
 			{
 				cout<<a[i].second+1<<" "<<a[p].second+1<<" "<<a[q].second+1;
 				return;
 			}
 			if(a[p].first+a[q].first < x-a[i].first) p++;
 			else q--;
 		}
 	}
 	cout<<"IMPOSSIBLE";
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