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
	int a[n], b[n];
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=0; i<n; i++)
 	{
 		cin >> b[i];
 	}
 	vector<pair<int,int>> d;
 	for(int i=0; i<n; i++)
 	{
 		d.push_back({a[i]-b[i], i});
 	}
 	sor(d);
 	int M = d[d.size()-1].first;
 	vector<int> av;
 	int ans = 0;
 	for(int i = d.size()-1; i>=0; i--)
 	{
 		if(d[i].first==M)
 		{
 			ans++;
 			av.push_back(d[i].second+1);
 		}
 		else break;
 	}
 	sor(av);
 	cout << ans << "\n";
 	plist(av,ans);
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