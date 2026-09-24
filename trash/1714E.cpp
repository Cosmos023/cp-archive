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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int c05 = 0;
	int other = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		if(a[i]%10 == 5 || a[i]%10==0) c05++; else other++;
 		if(a[i]%2==1)a[i]+=(a[i]%10);
 		if(a[i]%10!=0)a[i]%=20;
 	}
 	if(c05!=0 && other !=0)
 	{
 		NO; return;
 	}
 	if(other==0)
 	{
 		for(int i = 1; i<n; i++)
 		{
 			if(a[i]!=a[i-1])
 			{
 				NO; return;
 			}
 		}
 		YES;
 		return;
 	}
 	sor(a);
 	for(int i = 0; i<n-1; i++)
 	{
 		while(a[i]!=a[n-1])
 		{
 			a[i]+=(a[i]%10);
 			if(a[i]>a[n-1])
 			{
 				NO; return;
 			}
 		}
 	}
 	YES;
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

