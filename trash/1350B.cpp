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
const int MAXN = 100001;
vector<int> spf(MAXN + 1, 1);
vector<int> a(MAXN+1);

int dp[MAXN+1];

int val(int i)
{
	if(i==1) return 1;
	if(dp[i]!=-1) return dp[i];
	int M = 1;
	for(int k = 1; k*k<=i; k++)
	{
		if(a[k]<a[i] && (i%k==0))
		{
			M = max(M, val(k)+1);
			if(a[i/k]<a[i] && k!=1)
			{
				M = max(M, val(i/k)+1);
			}
		}
		if(a[i/k]<a[i] && (i%k==0) && k!=1)
		{
			M = max(M, val(i/k)+1);
		}
	}
	return dp[i] = M;
}

void solve()
{
	int n;
	cin >> n;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	int M = INT_MIN;
 	for(int i = 1; i<=n; i++)
 	{
 		M = max(M, val(i));
 	}
 	cout<<M<<"\n";
}


// Calculating SPF (Smallest Prime Factor) for every number till MAXN.
void sieve()
{
    // stores smallest prime factor for every number
    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 1) { 
            
            // if the number is prime ,mark
            // all its multiples who havent
            // gotten their spf yet
            for (int j = i; j <= MAXN; j += i) {
                if (spf[j]== 1) 
                
                    // if its smallest prime factor is
                    // 1 means its spf hasnt been
                    // found yet so change it to i
                    spf[j] = i;
            }
        }
    }
}

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	sieve();
	while(t--) 
	{
		memset(dp, -1, sizeof(dp));
		solve();
	}
}