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
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n), c(n), b(n, 0);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		c[i]=a[i];
 	}
 	lli k = 0;
 	for(int i=1; i<n; i++)
 	{
 		k = max(k, a[i-1]-a[i]);
 		if(a[i]<a[i-1])
 		{
 			a[i]+=k;
 			b[i]=1;
 		}
 		// k = max(k, a[i-1]-a[i]);
 	}
 	for(int i=1; i<n; i++)
 	{
 		if(c[i]<c[i-1])
 		{
 			c[i]+=k;
 		}
 	}
 	c.push_back(INT_MAX);
 	for(int i=1; i<=n; i++)
 	{
 		if(c[i]<c[i-1])
 		{
 			NO; return;
 		}
 	}
 	YES;
 	// a.push_back(INT_MAX);
 	// // int k = 0;
 	// int m = a[0];
 	// int i = 1;
 	// while(i<n && a[i]>=a[i-1]) i++;
 	// for(int j=i; j<n; j++)
 	// {
 	// 	if(a[j-1]<a[j] && a[j+1]<a[j] && a[j-1]>a[j+1])
 	// 	{
 	// 		NO; return;
 	// 	}
 	// 	if(a[j-1]>a[j] && a[j+1]<a[j])
 	// 	{
 	// 		NO; return;
 	// 	}
 	// }
 	// lli l = 0, r = INT_MAX;
 	// for(lli j=i; j<n; j++)
 	// {
 	// 	if(a[j]>a[j+1])
 	// 	{
 	// 		lli k = a[j]-a[j-1];
 	// 		if(k>=l && k<=r)
 	// 		{
 	// 			a[j]+=k;
 	// 			l=k;
 	// 		}
 	// 		else
 	// 		{
 	// 			NO; return;
 	// 		}
 	// 	}
 	// }
 	// YES;
 	// vi a1, a2;
 	// a1.push_back(a[0]);
 	// int l =0; r=INT_MAX;
 	// for(lli i=0; i<n; i++)
 	// {
 	// 	if(a[i]>=a1.back())
 	// 	{
 	// 		a1.push_back(a[i]);
 	// 		l=a[i];
 	// 		if()
 	// 	}
 	// 	else
 	// 	{
 	// 		if(a2.size()==0)
 	// 		{
 	// 			a2.push_back(a[i]);
 	// 		}
 	// 		else
 	// 		{
 	// 			if(a2.back()<=a[i])
 	// 			{
 	// 				if(a[i]>=l && a[i]<=r)
 	// 					a2.push_back(a[i]);
 	// 				else
 	// 				{
 	// 					NO; return;
 	// 				}
 	// 			}
 	// 			else
 	// 			{
 	// 				NO; return;
 	// 			}
 	// 		}
 	// 	}
 	// }
 	// YES;
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

