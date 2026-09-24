#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n,q;
	cin >> n>>q;
	vector<int> a(n+1, 0);
	vector<int> n0(n+1,0);
	vector<int> n1(n+1,0);
	vector<int> c(n+1, 0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		if(a[i]==1)
 		{
 			n1[i] = n1[i-1]+1;
 			n0[i] = n0[i-1];
 		}
 		else
 		{
 			n1[i] = n1[i-1];
 			n0[i] = n0[i-1]+1;
 		}
 	}
 	for(int i=2; i<=n; i++)
 	{
 		if(a[i]==a[i-1]) 
 		{
 			c[i]=c[i-1]+1;
 		}
 		else
 			c[i]=c[i-1];
 	}

 	while(q--)
 	{
 		int l,r;
 		cin>>l>>r;
 		if((n1[r]-n1[l-1])%3!=0 || (n0[r]-n0[l-1])%3!=0)
 		{
 			cout<<"-1\n"; continue;
 		}
 		int x = 0;
 		if(c[r]==c[l]) x=1;
 		cout<<(n1[r]-n1[l-1])/3+(n0[r]-n0[l-1])/3+(x)<<"\n";
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

