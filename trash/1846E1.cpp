#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";


vector<lli> v[1000];

void compute()
{
	vector<lli> vi;
	for(int k = 2; k<1000;k++)
	{
		vi.clear();
		vi.push_back(1+k+k*k);
		lli a = vi[0];
		int n = 3;
		while(a<=1e6)
		{
			a += pow(k,n);
			vi.push_back(a);
			n++;
		}
		v[k] = vi;
	}
}

void solve()
{
	int n;
	cin >> n;
	int ans = 0;
 	for(int k=2; k<1000; k++)
 	{
 		for(lli a:v[k])
 		{
 			if(a==n)
 			{
 				ans=1;
 				break;
 			}
 			else if(a>n) break;
 		}
 		if(ans) break;
 	}
 	if(ans) cout << "YES\n";
 	else cout << "NO\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	compute();
	int t=1;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}