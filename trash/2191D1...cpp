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
	int n;
	cin >> n;
	string s;
	cin >> s;
	s += "xx";
 	for(int i=0; i<n-1; i++)
 	{
 		if(s[i]=='(' && s[i+1]==')')
 		{
 			if(s[i+2]!='(')
 				continue;
 			else
 			{
 				if(s[i+3]=='(')
 				{
 					cout<<n-2<<"\n";
 					return;
 				}
 			}
 		}
 	}
 	cout<<"-1\n";
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
 