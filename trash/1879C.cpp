#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	string s;
	cin >> s;
	s+="2";
	vector<int> v;
	int i = 0;
	while(i<s.size()-1)
	{
		int n = 1;
		while(s[i]==s[i+n]) n++;
		if(n>1) v.push_back(n);
		i += n;
	}
	// plist(v,v.size());
	lli k = 0;
	for(lli n:v) k+=(n-1);
	lli a = 1;
	for(int i = 1; i<=k; i++)
		a = (a*i)%998244353;
	for(lli n:v)
		a = (a*n)%998244353;
	cout << k << " " << a << "\n";
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