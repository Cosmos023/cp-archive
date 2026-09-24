#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n,k;
	cin >> n>>k;
	string s;
	cin >> s;
	char a[n+1];
	for(int i = 1; i<=n; i++) a[i]='+';
	int l = 1, r = n;
	for(char c:s)
	{
		if(c=='0')
		{
			if(a[l]=='+')
			{
				a[l]='-';
				l++;
				continue;
			}
			if(a[l]=='?')
			{
				a[l]='-';
				int k = l+1;
				while(k<=n && (a[k]=='?'||a[k]=='-')) k++;
				if(k<=n)
					a[k]='?';
				l=k+1;
				continue;
			}
		}
		if(c=='1')
		{
			if(a[r]=='+')
			{
				a[r]='-';
				r--;
				continue;
			}
			if(a[r]=='?')
			{
				a[r]='-';
				int k = r-1;
				while(k<=n && (a[k]=='?'||a[k]=='-')) k--;
				if(k>=1)
					a[k]='?';
				r=k-1;
				continue;
			}
		}
		if(c=='2')
		{
			
		}
		if(l>=r) break;
	}
	plist1(a,n);
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