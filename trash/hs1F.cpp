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
	vector<int> ans(n,-1);
 	vector<vector<int>> v(11);
 	int last = 0;

 	for(int i=0; i<n; i++) cin>>a[i];
 	sort(a.begin(), a.end());
 	for(int i=0; i<n; i++)
 	{
 		// cin >> a[i];
 		for(int j = 0; j<11;j++)
 		{
 			if(j==last)
 			{
 				ans[i] = j+1;
	 			v[j].push_back(a[i]);
	 			last++;
	 			break;
 			}
 			// int k = gcd(v[j],a[i]);
 			int q = 1;
 			for(int l = 0; l<v[j].size(); l++)
 			{
 				if((gcd(v[j][l], a[i])==1))
 				{
 					// cout<<a[i]<<" "<<v[j][l]<<"\n";
 					q=0;
 				}
 			}
 			if(q==0)
 				continue;
 			ans[i] = j+1;
 			v[j].push_back(a[i]);
 			break;
 		}
 	}
 	plist(ans, n);
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