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
	int n;
	cin >> n;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	sor(a);
 	vi b;
 	b.insert(a);
 	int M = a[n-1];;
 	lli ans = 1LL*n*M;
 	si s;
 	int mex = 0;
 	int z = 0;
 	for(int c:a)
 	{
 		if(s.find(c)==s.end())
 		{
 			s.insert(c);
 			z++;
 			if(c==mex)
 			{
 				mex++;
 				ans+=mex;
 			}
 		}
 	}
 	ans+=1LL*(n-z)*mex;
 	cout<<ans<<"\n";
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

