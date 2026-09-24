#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, m;
	cin >> n >> m;
	// vector<int> h(n+1);
	multiset<int> h;
	vector<int> t(m+1);
	// vector<int> ans(m+1, 0);
 	for(int i=0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		h.insert(x);
 	}
 	for(int i=0; i<m; i++)
 	{
 		cin >> t[i];
 	}

 	for(int i=0;i<m;i++)
 	{
 		auto k = h.upper_bound(t[i]);
 		if(k==h.begin())
 		{
 			cout<<"-1\n";
 			continue;
 		}
 		k--;
 		cout<<*k<<"\n";
 		h.erase(k);
 	}

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