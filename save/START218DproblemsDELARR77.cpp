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
	vector<int> a(n);
	vector<int> c(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=0; i<n; i++)
 	{
 		cin >> c[i];
 	}
 	int smallest = 0;
 	vector<int> v;
 	for(int i = 1; i<n; i++)
 	{
 		if(c[i]<=c[smallest])
 		{
 			v.push_back(smallest);
 			smallest = i;
 		}
 	}

 	v.push_back(smallest);
 	v.push_back(n);
 	lli sum = 0;
 	for(int i=0; i<v.size()-1; i++)
 	{
 		for(int j = v[i]; j<v[i+1];j++)
 		{
 			sum += c[v[i]]*a[j];
 		}
 	}
 	cout<<sum<<"\n";
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