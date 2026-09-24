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
	vector<char> v;
	for(char c:s)
		v.push_back(c);
	if(v.size()!=5)
	{
		cout<<"NO\n";
		return;
	}
	sor(v);
	if(v[0]=='T'&&v[1]=='i'&&v[2]=='m'&&v[3]=='r'&&v[4]=='u')
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
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