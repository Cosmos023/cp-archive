#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	string s,t ;
	cin >> s >> t;
	int h[26];
 	for(int i=0; i<26; i++) h[i]=0;
 	for(int i=0; i<t.size(); i++) h[t[i]-'a']++;
 	// for(int i=0; i<26; i++) cout << h[i] << char('a'+i) << endl;
 	for(int i = 0; i<s.size(); i++) 
 	{
 		if(h[s[i]-'a']<=0)
 		{
 			cout << "Impossible\n";
 			return;
 		}
 		h[s[i]-'a']--;
 	}
 	int c = 0;
 	for(int i = 0; i<s.size(); i++)
 	{
 		for(int j=0; j<(s[i]-'a'); j++)
 		{
 			while(h[j]>0)
 			{
 				cout << char(j+'a');
 				h[j]--;
 			}
 			c++;
 		}
 		if(s[i]<s[i+1] || (i+1)==s.size())
 		{
 			while(h[s[i]-'a']>0)
 			{
 				cout << char(s[i]);
 				h[s[i]-'a']--;
 			}
 		}
 		cout<<s[i];
 	}
 	for(int j=0; j<26; j++)
	{
		while(h[j]>0)
		{
			cout << char(j+'a');
			h[j]--;
		}
	}
 	cout << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}