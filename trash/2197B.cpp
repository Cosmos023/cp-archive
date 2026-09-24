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
	vector<int> p(n+1);
	vector<int> pos(n+1);
	vector<int> a(n+1);
	vector<int> req(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> p[i];
 		pos[p[i]] = i;
 	}
 	for(int i=1; i<=n; i++) cin >> a[i];

 	int i = 1;
 	int j = n;
 	for(int k=1; k<=n; k++)
 	{
 		// if(pos[a[k]]>j || pos[a[k]]<i)
 		// {
 		// 	cout<<"NO\n"; return;
 		// }
 		// if(pos[a[k]]>k)
 		// {
 		// 	j = pos[a[k]];
 		// }
 		// else
 		// 	i = pos[a[k]];
 		req[k] = pos[a[k]];
 	}
 	for(int k=2; k<=n; k++)
 	{
 		if(req[k-1]>req[k])
 		{
 			cout<<"NO\n"; return;
 		}
 	}
 	cout<<"YES\n";
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

