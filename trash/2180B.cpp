#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

string AA[2100];
void solve()
{
	int n;
	cin >> n;
	string st;
	string s = "";
	int p = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> st;
 		AA[i+1] = AA[p]+st;
 		AA[n+i+1] = st+AA[p];
 		if(AA[i+1].compare(AA[n+i+1])>=0)
 			p = n+i+1;
 		else
 			p = i+1;
 	}
 	cout<<AA[p]<<"\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	AA[0] = "";
	int t=1;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}