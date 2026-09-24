#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int a,b;
	cin>>a>>b;
	vector<int> ans;
	int k = 31;

	while(((a>>k)&1)!=1) k--;
	cout<<k<<"\n";
	for(int i = 0; i<=k;i++)
	{
		if((a>>i)&1 == (b>>i)&1)
			continue;
		if((a>>i)&1)
		{
			ans.push_back(2<<i);
			a ^= (2<<i);
		}
		else
		{
			if(a<(2<<i))
			{
				cout<<"-1\n";
				return;
			}
			ans.push_back(2<<i);
			a ^= (2<<i);
		}

	}
	cout<<ans.size()<<"\n";
	plist(ans,ans.size());
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