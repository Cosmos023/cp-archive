#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, k;
	cin >> n >> k;
	int nc = n;
	if(n<k)
	{
		cout<<"NO\n";
		return;
	}
	multiset<int> ms;
	for(int i = 30; i>=0; i--)
	{
		while(n>=(1<<i))
		{
			ms.insert((1<<i));
			n-=(1<<i);
		}
	}
		// for(auto i:ms) cout<<i<<" "; cout<<"\n";
	while(*prev(ms.end(),1)!=1 && ms.size()<k)
	{
		auto k = ms.end();
		k--;
		int m = *k;

		ms.erase(k);
		ms.insert(m/2);
		ms.insert(m/2);
		// for(auto i:ms) cout<<i<<" "; cout<<"\n";
	}

	if(ms.size()==k)
	{
		cout<<"YES\n";
		for(auto i:ms) cout<<i<<" ";
	}
	else 
		cout<<"NO\n";
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