#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";



const lli MAXN = 1e7;
vector<bool> is_prime(MAXN, true);
vector<lli> primes;
void Sieve() {
    is_prime[0] = is_prime[1] = false;
    for(lli p = 2; p * p < MAXN; p++) 
    {
        if(is_prime[p]) 
        {
            for(lli i = p * p; i < MAXN; i += p) 
            {
                is_prime[i] = false;
            }
        }
    }
    for(lli p = 2; p < MAXN; p++) 
    {
        if (is_prime[p]) 
        {
            primes.push_back(p);
        }
    }
}

bool isP(lli x)
{
	if(x<=1) return false;
	bool p = true;
	for(lli i = 2; i*i<=x; i++)
	{
		if(x%i==0)
		{
			p = false;
			break;
		}
	}
	return p;
}

void solve()
{
	lli x;
	cin >> x;
	if(isP(x))
	{
		cout<<"1 "<<x<<"\n";
		return;
	}
	lli xc = x;
	vector<int> pf(primes.size(), 0);
	int i = 0;
 	while(x>=1 && i<primes.size())
 	{
 		if(x%primes[i]==0) 
 		{
 			pf[i]++;
 			x/=primes[i];
 		}
 		else i++;
 	}
 	if(x!=1)
 	{
 		cout<<x<<" "<<xc/x<<"\n";
 		return;
 	}
 	// plist(pf, pf.size());
 	lli n1 = 1; lli n2 = xc;
 	lli a = 1;
 	lli b = n2;
 	vector<lli> nums;
 	for(int i = 0; i<pf.size() && n1<=n2; i++)
 	{

 		if(pf[i]==0) continue;
 		nums.push_back(pow(primes[i],pf[i]));
 		// n1 *= (primes[i]*pf[i]);
 		// n2 /= (primes[i]*pf[i]);
 		// if(n1>n2) break;
 		// if(n2<b)
 		// {
 		// 	b = n2; a = n1;
 		// }
 	}
 	sor(nums);
 	// for(int i = 0; i<nums.size();i++)
 	// {
 	// // cout<<n1<<" "<<n2<<"\n";
 	// 	n1 *= (nums[i]);
 	// 	n2 /= (nums[i]);
 	// 	// if(n1>n2) break;
 	// 	if(max(n2,n1)<max(b,a))
 	// 	{
 	// 		b = n2; a = n1;
 	// 	}
 	// }
 	// lli a = 1, b = x;
 	for(int i = 0; i<(1<<nums.size()); i++)
 	{
 		lli n1 = 1;
 		lli n2 = 1;
 		for(int j = 0; j<nums.size(); j++)
 		{
 			if((i>>j)&1)
 			{
 				n1*=nums[j];
 			}
 			else
 				n2*=nums[j];
 		}
 		if(max(n2,n1)<max(b,a))
 		{
 			b = n2; a = n1;
 		}
 	}

 	cout<<a<<" "<<b<<"\n";
}	
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Sieve();
	int t=1;
	// cin >> t;
	while(t--) 
	{
		solve();
	}
}