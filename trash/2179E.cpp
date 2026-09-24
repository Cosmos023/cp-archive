#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, x, y;
	cin >> n >> x >> y;
	string s;
	cin >> s;
	lli sump = 0;
	vector<int> p(n);
	vector<int> a(n, 0);
	vector<int> b(n, 0);
 	for(int i=0; i<n; i++)
 	{
 		cin >> p[i];
 		sump += p[i];
 	}
 	if(sump<x+y)
 	{
 		cout<<"NO\n";
 		return;
 	}
 	int last_a = -1;
 	int last_b = -1;
 	int na = 0, nb = 0;
 	for(int i = s.size()-1; i>=0; i--)
 	{
 		if(last_a==-1 && s[i]=='0')
 			last_a=i;
 		if(last_b==-1 && s[i]=='1')
 			last_b=i;
 		if(s[i]=='0')
 			na++;
 		else
 			nb++;
 	}

 	// if(last_a==-1)
 	// {
 	// 	if(y-x>=n)
 	// 		cout<<
 	// }
 	if(na>x || nb>y)
 	{
 		cout<<"NO\n";
 		return;
 	}
 	cout<<"YES\n";
 	for(int i = 0; i<n; i++)
 	{
 		if(i!=last_a&&i!=last_b)
 		{
 			if(s[i]=='0')
 			{
 				if(p[i]%2==0)
 				{
 					a[i]=p[i]/2-1;
 					b[i]=p[i]/2+1;
 				}
 				else
 				{
 					a[i] = p[i]/2+1;
 					b[i] = p[i]/2;
 				}
 			}
 		}
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