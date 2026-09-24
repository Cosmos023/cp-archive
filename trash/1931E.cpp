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
	int n,m;
	cin >> n>>m;
	vector<int> a(n);
	lli ans = 0;
	vll n0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		string k = to_string(a[i]);
 		ans+=k.size();
 		lli z = 0;
 		for(int j = k.size()-1;j>=0;j--)
 		{
 			if(k[j]!='0') break;
 			z++;
 		} 
 		n0.push_back(z);
 	}
 	sort(rall(n0));
 	for(int i=0; i<n0.size(); i+=2)
 		ans-=n0[i];
 	if(ans>=m+1) cout<<"Sasha\n"; else cout<<"Anna\n";
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

