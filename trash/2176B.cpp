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
	string s;
	cin >> s;
	s += s;
	int M = 0;
	int p = -1;
	for(int i = 0; i<s.size(); i++)
	{
		if(s[i]=='0' && p!=-1)
		{
			M = max(M, i-p);
		}
		else
			p = i;
	}
	cout << M << "\n";
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