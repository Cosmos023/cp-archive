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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

const lli M = 1e9+7;
void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n*n,0);
	a[0]=1;
 	for(int i=1; i<=n; i++)
 	{
 		vector<pair<lli,lli>> z;
 		for(int j=0; j<n*n; j++)
 		if(a[j]>0) z.push_back({j,a[j]});
 		for(auto& [c,d]:z)
 		{
 			if(c+i<n*n) 
 			{
 				a[c+i]+=d;
 				a[c+i]%=M;
 			}
 		}
 		// pL(a);
 	}
 	if((n*(n+1)/2)%2==0)
 		cout<<(a[n*(n+1)/4]*500000004)%M<<endl;
 	else
 		cout<<0<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

