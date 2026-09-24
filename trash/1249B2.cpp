#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=1;i<=(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int p[n+1];
	vector<int> d(n+1);
 	for(int i=1; i<=n; i++) cin >> p[i];
 	for(int i=1; i<=n; i++) d[i]=0;
 	vector<int> cur;
 	for(int i=1; i<=n; i++) 
 	{
 		if(d[i]) continue;
 		cur.clear();
 		int k = p[i];
 		while(k!=i)
 		{
 			cur.push_back(k);
 			k = p[k];
 		}
 		cur.push_back(k);
 		for(int c:cur)
 		{
 			d[c]=cur.size();
 		}
 	}
 	plist(d,n);
 	// cout<<d[0]<<"\n";
 	// cout<<(d)[0]<<"\n";
 	// for(int i=1; i<=n; i++) cout<<d[i]<<" ";
 	// cout << "\n";
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