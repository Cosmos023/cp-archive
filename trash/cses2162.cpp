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
	set<int> s;
 	for(int i=1; i<=n; i++)
 	{
 		s.insert(i);
 	}
 	int p = 0;
 	cout<<s[p];
 	p++;
 	while(s.size())
 	{
 		cout<<*p<<" ";
 		if(p==s.rbegin())
 		{

 		}
 		auto q = 
 		s.erase(p);
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