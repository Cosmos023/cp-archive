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

bool valid(vi& L, vi& R, int i, int sz)
{
	if(sz>=L[i] && sz<=R[i]) return true; else return false;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> L(n), R(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> L[i] >> R[i];
 	}
 	lli ans = 0;
 	for(int sza = 1; sza<n; sza++)
 	{
 		int szb = n-sza;
 		int both = 0, onlya=0, onlyb=0;
 		for(int i = 0; i<n; i++)
 		{
 			if(!valid(L, R, i, sza) && !valid(L, R, i, szb)) continue;
 			if(valid(L, R, i, sza))
 			{
 				if(valid(L, R, i, szb))
 				{
 					both++;
 				}
 				else onlya++;
 			}
 			else onlyb++;
 		}
 		int left = max(0, )
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

