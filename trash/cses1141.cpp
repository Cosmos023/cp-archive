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
	vector<int> p(n);
	for(int i=0; i<n; i++)
	{
		cin >> p[i];
	}
	int a = 0, b = 0;
	int M = 1;
	map<int, int> count;
	count[p[a]]++;
	while(a<n && b<n)
	{
		M = max(M, b-a+1);
		if(a==b)
		{
			if(b==n-1)
			{
				break;
			}
			if(p[a]==p[b+1])
			{
				count[p[a]]--;
				a++;
				b++;
				count[p[a]]++;
			}
			else
			{
				b++;
				count[p[b]]++;
			}
		}
		else
		{
			if(b!=n-1)
			{
				b++;
				count[p[b]]++;
			}
			while(count[p[b]]>=2)
			{
				// cout<<"h"<<endl;
				count[p[a]]--;
				a++;
			}
			// M = max(M, b-a+1);
			// b++;
			if(b==(n-1)) break;
			// cout<<a<<b<<"\n";
		}
	}
	M = max(M, b-a+1);
	cout<<M<<endl;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--) 
	{
		solve();
	}
}