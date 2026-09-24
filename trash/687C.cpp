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
	int n, k;
	cin >> n >> k;
	vector<int> c(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> c[i];
 	}
	vector<int> ans(k+1, 0);
	ans[0]=1;
 	for(int i=0; i<n; i++)
 	{
 		vi z;
 		for(int j=0; j<=k; j++)
 		{
 			if(ans[j] && c[i]+j<=k)
 			{
 				// ans[c[i]+j]=1;
 				z.push_back(c[i]+j);
 			}
 		}
 		for(int j:z) ans[j]=1;
 	// pL(ans);
 	}
	vector<int> sus(k+1, 0);
	sus[k]=1;
	for(int i=0; i<n; i++)
 	{
 		vi z;
 		for(int j=0; j<=k; j++)
 		{
 			if(sus[j] && j-c[i]>=0)
 			{
 				z.push_back(-c[i]+j);
 			}
 		}
 		for(int j:z) sus[j]=1;
 pL(sus);
 	}
 	for(int j=0; j<=k; j++) if(!sus[j]) ans[j]=0;

 	lli q = accumulate(all(ans),0);
 	cout<<q<<"\n";
 	for(int j=0; j<=k; j++)
 	{
 		if(ans[j]) cout<<j<<" ";
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

