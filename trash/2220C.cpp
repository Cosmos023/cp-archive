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
	lli p,q;
	cin >> p>>q;
	lli k = p+2*q;
	lli m;
	// if(k%2)
	// {
	if((p==2&&q==1)||(q==2&&p==0)||(p==4&&q==0))
	{
		cout<<"1 1\n"; return;
	}
	lli z = (k+3)/3;
	// for(lli n = 2; (k)>=(3*n+1); n++)
	// if()
	for(lli n = 1; n<=z; n++)
	{
		m = (k-n)/(2*n+1);
		if(n>m) break;
		if((k-n)%(2*n+1)==0 && q<=m*n+min(m,n))
		{
			cout<<n<<" "<<m<<"\n";
			return;
		}
	}
	// }
	cout<<"-1\n";
	// else
	// {
	// 	for(int n = 1; n<k; n+=2)
	// 	{
	// 		if((k-n)%(2*n+1)==0)
	// 		{
	// 			m = (k-1)/(2*n+1);
	// 			cout<<n<<" "<<m<<"\n";
	// 		}
	// 	}
	// }
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

