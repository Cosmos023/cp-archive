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
	vector<int> p;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		auto k = upper_bound(p.begin(), p.end(), x);
		if(k!=p.end())
		{
			*k = x;
		}
		else
		{
			ans++;
			p.push_back(x);
		}
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