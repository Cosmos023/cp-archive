#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int x,y;
	cin >> x>>y;
	// vector<int> a(n);
 	// for(int i=0; i<n; i++)
 	// {
 	// 	cin >> a[i];
 	// }
 	if(x==y)
 	{
 		cout<<1<<"\n";
 		for(int i=0; i<x; i++) cout<<"1 ";
 		for(int i=0; i<y; i++) cout<<"-1 ";
 		cout<<"\n";
 		return;
 	}
 	// if(x==0)
 	// {
	//  	lli c = 0;
	//  	for(int i=1; i<; i++)
	//  	{
	//  		if(k%i==0) c++;
	//  	}
 	// 	cout<<c<<"\n";
 	// 	for(int i=0; i<y; i++) cout<<"-1 ";
 	// 	cout<<"\n";
 	// 	return;
 	// }
 	// if(y==0)
 	// {
 	// 	cout<<x+y<<"\n";
 	// 	for(int i=0; i<x; i++) cout<<"1 ";
 	// 	cout<<"\n";
 	// 	return;
 	// }
 	int k = abs(x-y);
 	lli c = 1;
 	for(int i=1; i<k; i++)
 	{
 		if(k%i==0) c++;
 	}
 	cout<<c<<"\n";
 	if(x>y)
 	{
 		for(int i=0; i<y; i++) cout<<"-1 ";
 		for(int i=0; i<x; i++) cout<<"1 ";
 		cout<<"\n";
 		return;
 	}
 	else
 	{
 		for(int i=0; i<x; i++) cout<<"1 ";
 		for(int i=0; i<y; i++) cout<<"-1 ";
 		cout<<"\n";
 		return;
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

