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
	int n,s,x;
	cin >> n>>s>>x;

	vector<int> a(n);
	lli sum = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		sum+=a[i];
 	}
 	if((sum-s)%x==0 && s>=sum)
 	{
 		cout<<"YES\n";
 	}
 	else
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

