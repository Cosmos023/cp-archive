#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	lli n, m;
	cin >> n >> m;
	lli c = 0;
 	while(m!=n)
 	{
 		if(n>m)
 		{
 			m++;
 		}
 		else
 		{
 			if(m&1) m++;
 			else m/=2; 
 		}
 		c++;
 	}
 	cout<<c;
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