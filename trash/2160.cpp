#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	lli x;
	cin >> x;
	int k = 31;
	if(x==0)
	{
		cout<<"YES\n";
		return;
	}
	while((x&(1LL<<k))==0) k--;
	int k0 = k;
	int ans1 = 1;
	if((k%2)==0 && (x&(1LL<<(k/2)))!=0) ans1=0;
	for(int i = 0; i<=k;i++)
	{
		if((x&(1LL<<i))==0 && (x&(1LL<<(k-i)))!=0)
		{
			ans1 = 0;
			break;
		}
	}
	if(ans1)
	{
		cout<<"YES\n";
		return;
	}
	else
	{
		k++;
	}
	int i =1;
	while((k0+1+i)<=63)
	{
		int ans = 1;
		if((k%2)==0 && (x&(1LL<<(k/2)))!=0) ans=0;
		for(int i = 0; i<=k;i++)
		{
			if((x&(1LL<<i))==0 && (x&(1LL<<(k-i)))!=0)
			{
				ans = 0;
				break;
			}
		}
		if(ans){ cout<<"YES\n"; return;}
		k++;
		i++;
	}
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