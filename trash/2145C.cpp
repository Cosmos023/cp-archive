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
	int i = 0;
	int ma = -1;
	int na=0,nb=0;
	for(char c:s)
	{
		if(c=='a') na++;
		else nb++;
	}
	s+='!';
	while(i<n)
	{
		if(s[i]=='a')
		{
			int d = i;
			while(s[d]=='a') d++;
			ma = max(ma, d-i);
			i = d;
		}
		else
			i++;
	}
	i = 0;
	int mb = -1;
	while(i<n)
	{
		if(s[i]=='b')
		{
			int d = i;
			while(s[d]=='b') d++;
			mb = max(mb, d-i);
			i = d;
		}
		else
			i++;
	}
	// cout<<mb<<" ";
	if(ma==-1||mb==-1)
	{
		cout<<"-1\n";
		return;
	}
	if(na==nb)
	{
		cout<<"0\n";
		return;
	}
	if(na>nb)
	{
		if(ma>=(na-nb))
		{
			cout<<na-nb<<"\n";
			return;
		}
		cout << "-1\n";
	}
	else
	{
		if(mb>=(nb-na))
		{
			cout<<nb-na<<"\n";
			return;
		}
		cout << "-1\n";
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