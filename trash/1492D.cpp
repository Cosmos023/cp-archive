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
	int a,b,k;
	cin >> a>>b>>k;
	string x = "", y="";
	for(int i = 0; i<b-1; i++) x+="1"; y = x;
	if(b==1&&k!=0){NO; return;}
	if(a<k)
	{
		NO; return;
	}
	for(int i = 0; i<k; i++) y+="0";
	x+="1";
	y+="1";
	for(int i = 0; i<k; i++) x+="0";
	for(int i = 0; i<a-k; i++) {x+="0";y+="0";}
	YES;
	cout<<x<<"\n";
	cout<<y<<"\n";
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

