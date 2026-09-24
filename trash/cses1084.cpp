#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n,m,k;
	cin >> n>>m>>k;
	vector<int> a(n);
	vector<int> b(m);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=0; i<m; i++)
 	{
 		cin >> b[i];
 	}
 	sor(a); sor(b);
 	int ans = 0;
 	int i = 0, j = 0;
 	while(i<n&&j<m)
 	{
 		if(abs(a[i]-b[j])<=k)
 		{
 			ans++;
 			i++; j++;
 			continue;
 		}
 		if(a[i]<b[j])
 		{
 			i++;
 		}
 		else
 			j++;
 	}
 	cout<<ans;

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