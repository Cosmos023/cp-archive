#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

int h[26];
void solve()
{
	string s;
	cin >> s;
	for(char c:s)
	{
		h[c-'a']++;
	}
	int c = 0;
	for(int i =0 ; i<26; i++)
	{
		if(h[i]%2) c++;
	}
	if(c%2 || c==0) cout<<"First";
	else cout << "Second";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{
		solve();
	}
}