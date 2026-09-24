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
	string s; cin>>s;
	lli X=0,Y=0,a=0,b=0;
	int q; cin>>q;
 	for(int i=0; i<n; i++)
 	{
 		if(s[i]=='+') X++; else Y++;
 	}
 	while(q--)
 	{
 		cin>>a>>b;
 		if(a==b)
 		{
 			if(X==Y) YES else NO;
 			continue;
 		}
 		if(((Y-X)*b)%(a-b)!=0)
 		{
 			NO; continue;
 		}
 		lli z = (Y-X)*b/(a-b);
 		if(z>=-Y && z<=X) YES else NO;
 	}
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

