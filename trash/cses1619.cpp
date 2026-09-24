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
	vector<pair<int,int>> vp;
	for(int i = 0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		vp.push_back({a, 1});
		vp.push_back({b, 0});
	}
	sor(vp);
	int c=0;
	int M=0;
	for(auto p:vp)
	{
		if(p.second==1) c++;
		else c--;
		M = max(M, c);
	}
	cout<<M;
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