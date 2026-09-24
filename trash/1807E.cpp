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
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<lli> ps(n+1, 0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		ps[i] = ps[i-1]+a[i];
 	}
 	int l = 1, r = n;
 	while(l!=r)
 	{
 		int m = (l+r)/2;
 		cout<<"? "<<m-l+1<<" ";
 		for(int i = l; i<=m; i++)
 			cout<<i<<" ";
 		cout<<endl;
 		lli x;
 		cin>>x;
 		if(x!=ps[m]-ps[l-1])
 		{
 			r = m;
 		}
 		else
 			l = m+1;
 	}
 	cout<<"! "<<l<<endl;
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

