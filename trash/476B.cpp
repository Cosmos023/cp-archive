#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

int x;
double ans = 0;
string s;
void fs(int l, int val, int p)
{
	if(l==p)
	{
		if(val==x)
		{
			ans++;
		}
		return;
	}
	if(s[p]=='+')
	{
		fs(l, val+1, p+1);
	}
	else if(s[p]=='-')
	{
		fs(l,val-1,p+1);
	}
	else
	{
		fs(l, val+1, p+1);
		fs(l, val-1, p+1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s1;
	string s2;
	cin >> s1 >> s2;
	s = s2;
	int i = 0;
	for(char ch : s1)
	{
		if(ch=='+') i++;
		else i--;
	}
	int nq = 0;
	for(char ch : s2)
	{
		if(ch=='?') nq++;
	}
	x = i;
	fs(s2.size(), 0, 0);
	cout <<fixed<<setprecision(15) << ans/pow(2,nq);
	// cout << ans;
}