#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	string r;
	cin >> r;
	int n = r.size();
	int ans = 0;
	if(r[0]=='u')
	{
		r[0]='s';
		ans++;
	}
	if(r[n-1]=='u')
	{
		r[n-1]='s';
		ans++;
	}
	for(int i = 0; i<=n-3; i++)
	{
		if(r.substr(i,3)=="uuu")
		{
			ans++;
			r[i+1]='s';
		}
	}
	for(int i = 0; i<=n-4; i++)
	{
		if(r.substr(i,4)=="suus")
		{
			ans++;
			r[i+2]='s';
		}
	}
	cout<<ans<<"\n";
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