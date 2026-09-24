#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	lli n, k;
	cin >> n >> k;

	if((n-k+1)>0 && (n-k+1)%2==1)
	{
		cout<<"YES\n";
		for(int i = 0; i<k-1; i++) cout<<"1 ";
		cout<<n-k+1<<"\n";
		return;
	}
	if((n-2*(k-1))>0 && (n-2*(k-1))%2==0)
	{
		cout<<"YES\n";
		for(int i = 0; i<k-1; i++) cout<<"2 ";
		cout<<n-2*(k-1)<<"\n";
		return;
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