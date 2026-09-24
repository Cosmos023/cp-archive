#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n,l,r;
	cin >> n >> l >> r;
	vector<int> v(n);
 	for(int i=0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		v[i] = x;
 	}
	vector<int> vs = v;
	sor(vs);
 	// for(int i=0; i<n; i++) cout << vs[i] << " ";
 	// cout << "\n";
	int lp = 0, rp = n-1;
	int ans = 0;
 	while(lp<rp)
 	{
 		if(vs[lp]+vs[rp]<=r && vs[lp]+vs[rp]>=l)
 		{
 			ans++;
 			if(rp-lp>1)
 			{
 				if(vs[lp]+vs[rp-1]<=r&&vs[lp]+vs[rp-1]>=l)
 					ans++;
 				if(vs[lp+1]+vs[rp]<=r&&vs[lp+1]+vs[rp]>=l)
 					ans++;
 			}
 			lp++;
 			rp--;
 		}
 		else if(vs[lp]+vs[rp] > r)
 			rp--;
 		else if(vs[lp]+vs[rp] < l)
 			lp++;
 	}
 	cout << ans << "\n";
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