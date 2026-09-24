#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n, q;
	cin >> n >> q;
 	string s;
 	cin >> s;
 	int cx, cv, ci;
 	while(q--)
 	{
 		cin >> cx >> cv >> ci;
 		string sc = s+"0";
 		int nq = 0;
 		for(int i = 0; i<n; i++)
 		{
 			if(sc[i]=='?')
 			{
 				nq++;
 				if(ci>0 && (sc[i+1]=='V' || sc[i+1]=='X'))
 				{
 					sc[i] = 'I';
 					ci--;
 					nq--;
 				}
 			}
 		}
 		for(int i = 1; i<n; i++)
 		{
 			if(sc[i]=='?' && sc[i-1]=='?' && ci<2 && nq==1)
 			{
 				if(cv>0 )
 				{
 					sc[i] = 'V';
 					cv--;
 					nq--;
 				}
 				else if(cx>0)
 				{
 					sc[i] = 'X';
 					cx--;
 					nq--;
 				}
 			}
 		}
 		for(int i = 0; i<n; i++)
 		{
 			if(sc[i]=='?')
 			{
 				if(ci>0)
 				{
 					sc[i] = 'I';
 					ci--;
 				}
 				else if(cv>0)
 				{
 					sc[i] = 'V';
 					cv--;
 				}
 				else if(cx>0)
 				{
 					sc[i] = 'X';
 					cx--;
 				}
 			}
 		}
 		int ans = 0;
 		for(int i = 0; i<n; i++)
 		{
 			if(sc[i]=='I')
 			{
 				if(sc[i+1]=='V'||sc[i+1]=='X')
 					ans--;
 				else
 					ans++;
 			}
 			else if(sc[i]=='V')
 			{
 				ans+=5;
 			}
 			else
 			{
 				ans+=10;
 			}
 		}
 		cout << ans << "\n";
 	}
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