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
	if(n==1)
	{
		cout<<"1\n"; return;
	}
	if(n==2 || n==3)
	{
		cout<<"-1\n"; return;
	}
	if(n==4)
	{
		cout<<"2 4 1 3\n"; return;
	}
	int m = n/;
 	int k = n-4*m;
 	for(int i=0; i<m; i++)
 	{
 		cout<<i*4+2<<" "<<i*4+4<<" "<<i*4+1<<" "<<i*4+3<<" ";
 	}
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

