#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	lli a[n];
	lli ps[n];
	unordered_map<lli,int> um;
	cin >> a[0];
	ps[0] = a[0];
 	for(int i=1; i<n; i++) 
 	{
 		lli x;
 		cin >> x;
 		if(i%2==1) x = -x;
 		a[i]=x;
 		ps[i] = ps[i-1]+x;
 	}
 	// int ans = 0;
 	// sort(ps,ps+n);
 	// for(int i=0; i<n; i++)
 	// {
 	// 	if(ps[i]==0)
 	// 	{
 	// 		ans=1;
 	// 		break;
 	// 	}
 	// 	if(i!=(n-1) && ps[i]==ps[i+1])
 	// 	{
 	// 		ans=1;
 	// 		break;
 	// 	}
 	// }
 	// if(ans) cout << "YES\n";
 	// else cout << "NO\n";

 	for(int i=0; i<n; i++)
 	{
 		if(um[ps[i]]==0 && ps[i]!=0)
 			um[ps[i]]=1;
 		else
 		{
 			cout << "YES\n";
 			return;
 		}
 	}
 	cout << "NO\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}