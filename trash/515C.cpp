#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	lli n, a;
	cin >> n >> a; 
	vector<int> ans;
	while(a>0)
 	{
 		int d = a%10;
 		a/=10;
 		if(d==2||d==3||d==5||d==7) 
 		{
 			ans.push_back(d);
 		}
 		else if(d==4)
 		{
 			ans.push_back(2);
 			ans.push_back(2);
 			ans.push_back(3);
 		}
 		else if(d==6)
 		{
 			ans.push_back(5);
 			ans.push_back(3);
 		}
 		else if(d==8)
 		{
 			ans.push_back(7);
 			ans.push_back(2);
 			ans.push_back(2);
 			ans.push_back(2);
 		}
 		else if(d==9)
 		{
 			ans.push_back(7);
 			ans.push_back(3);
 			ans.push_back(3);
 			ans.push_back(2);
 		}
 	}
 	sor(ans);
 	for(int i = ans.size()-1; i>=0; i--)
 		cout<<ans[i];
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