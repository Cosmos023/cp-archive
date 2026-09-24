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
	int n, m;
	cin >> n >> m;
	vector<vi> a(n);
	int n1 = 0;
 	for(int i=0; i<n; i++)
 	{
 		for(int j=0; j<m; j++)
 		{
 			int x; cin >> x;
 			a[i].push_back(x);
 			if(x==1) n1++;
 		}
 	}

 	int k = n/2;
 	cout<<1LL*k*(n-k)<<"\n";
 	int i, j;
 	for(i=0; i<n; i++)
 	{
 		int f = 0;
 		for(j = m-1; j>=0; j--)
 		{
 			if(a[i][j]==1) k--;
 			if(k<=0)
 			{
 				f=1;
 				break;
 			}
 		}
 		if(f) break;
 	}
 	cout<<i<<" "<<j<<" n\n";
 	// for(int k = )
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

