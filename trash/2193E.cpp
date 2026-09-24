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





// const int MAXN = 300005;
// vector<int> spf(MAXN + 1, 1);

// // Calculating SPF (Smallest Prime Factor) for every number till MAXN.
// void sieve()
// {
//     // stores smallest prime factor for every number
//     spf[0] = 0;
//     for (int i = 2; i <= MAXN; i++) {
//         if (spf[i] == 1) { 
            
//             // if the number is prime ,mark
//             // all its multiples who havent
//             // gotten their spf yet
//             for (int j = i; j <= MAXN; j += i) {
//                 if (spf[j]== 1) 
                
//                     // if its smallest prime factor is
//                     // 1 means its spf hasnt been
//                     // found yet so change it to i
//                     spf[j] = i;
//             }
//         }
//     }
// }









vector<int> isp(300005, 0);
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> ans(n+1,-1);

 	for(int i=0; i<300005; i++) isp[i]=0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		isp[a[i]] = 1;
 	}

 	for(int i=1; i<=n; i++)
 	{
 		if(isp[i])
 		{
 			cout<<"1 ";
 			ans[i] = 1;
 			continue;
 		}
 		for(int j = 2; j*j<=i; j++)
 		{
 			if(i%j!=0)
 				continue;
 			if(ans[j]!=-1 && ans[i/j]!=-1)
 			{
	 			if(ans[i]!=-1)
	 				ans[i] = min(ans[i], ans[j]+ans[i/j]);
	 			else
	 				ans[i] = ans[j]+ans[i/j];
 			}
 		}
 		cout<<ans[i]<<" ";
 	}
 	cout<<"\n";
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

