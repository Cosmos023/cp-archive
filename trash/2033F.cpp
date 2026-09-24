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

vll f(1000006, 0);
const lli M = 1e9+7;

void pc()
{
	f[1]=1;
	f[2]=1;
	for(int i = 3; i<=1000005; i++) f[i]=(f[i-1]+f[i-2])%M;
}


void solve()
{
	lli n, k;
	cin >> n >> k;
	lli i=1,l=0;
	lli fi = 1;
 	for(; i<1000005; i++)
 	{
 		if(fi%k==0) break;
 		lli n = fi+l;
 		l = fi;
 		fi = n%k;
 	}
 	// cerr<<M<<"\n";
 	cout<< ((n%M)*(i))%M << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	pc();
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

