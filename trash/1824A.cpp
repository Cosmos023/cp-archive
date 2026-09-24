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
	int n, m;
	cin >> n >> m;
	vector<int> x;
	vector<int> a(m+1, -1);
	int ans = 0;
	int n1 = 0, n2 = 0;
 	for(int i=0; i<n; i++)
 	{
 		int a;
 		cin >> a;
 		if(a==-1) n1++;
 		else if(a==-2) n2++;
 		else x.push_back(a);
 	}
 	for(int i=0; i<x.size(); i++)
 	{
 		if(a[x[i]]==-1)
 		{
 			a[x[i]] = 1;
 			ans++;
 		}
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

