#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	vector<int> copy = a;
 	sor(a);
 	for(auto it=a.begin(); it!=a.end(); it++)
 	{
 		int k = x - (*it);
 		auto v = lower_bound(a.begin(), a.end(), k);
 		if((*v)==k && v!=it && v!=a.end())
 		{
 			int p1 = find(copy.begin(),copy.end(),*it)-copy.begin()+1;
 			int p2 = find(copy.begin(),copy.end(),*v)-copy.begin()+1;
 			if(p1==p2)
 				cout<<p1<<" "<<find(find(copy.begin(),copy.end(),*it)+1, copy.end(), *it)-copy.begin()+1;
 			else
 				cout<<p1<<" "<<p2;
 			return;
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