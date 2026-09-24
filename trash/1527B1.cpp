#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int n0 = 0;
	for(int i = 0; i<n; i++)
	{
		if(s[i]=='0') n0++;
	}
	if(n%2==0 || s[n/2]=='1')
	{
		if(n0%4==0) cout<<"DRAW\n";
		else cout << "BOB\n";
	}
	else
	{
		if(n0%2==0) cout << "DRAW\n";
		else if(n0%4==1) cout << "BOB\n";
		else cout << "ALICE\n";
	}
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