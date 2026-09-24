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
	int n,m;
	cin >> n >> m;
	multiset<int> a,b;
 	for(int i=0; i<n; i++) {int x; cin>>x; a.insert(x);}
 	for(int i=0; i<m; i++) {int x; cin>>x; b.insert(x);}
 	while(b.size()<a.size() && !b.empty())
 	{
 		if(a.find(*b.rbegin())!=a.end())
 		{
 			a.erase(a.find(*b.rbegin())); b.erase(b.find(*b.rbegin()));
 			continue;
 		}
 		int x = *b.rbegin();
 		int y = x-x/2;
 		x/=2;
 		b.erase(b.find(*b.rbegin())); b.insert(x); b.insert(y);
 		// cout<<b.size()<<endl;
 	}
 	for(int c:b)
 	{
 		if(a.find(c)!=a.end())
 		{
 			a.erase(a.find(c));
 		}
 		else
 		{
 			NO; return;
 		}
 	}
 	if(a.empty())
 	{
 		YES;
 	}
 	else
 	{
 		NO;
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

