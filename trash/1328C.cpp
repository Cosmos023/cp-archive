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
	string x; cin>>x;
	string a, b;
	a=b="1";
	int y = 0;
 	for(int i=1; i<n; i++)
 	{
 		if(y)
 		{
 			a+='0';
 			b+=x[i];
 			continue;
 		}
 		if(x[i]=='1')
 		{
 			a+='1'; b+='0';
 			y=1;
 		}
 		else if(x[i]=='2')
 		{
 			a+='1'; b+='1';
 		}
 		else
 		{
 			a+='0'; b+='0';
 		}
 	}
 	cout<<a<<"\n";
 	cout<<b<<"\n";
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

