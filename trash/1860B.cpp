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
	lli m, k, a1, ak;
	cin >> m>>k>>a1>>ak;
	lli usedAK = min(m/k, ak);
	m-=(k*usedAK);
	lli usedA1 = min(m, a1);
	if(m==usedA1)
	{
		cout<<"0\n"; return;
	}
	lli remA1 = max(0LL, m-a1);
	lli z = (remA1+k-1)/k*k;
	if(m>=z)
	{
		cout<<z/k<<"\n";
	}
	else
	{
		lli y = remA1/k;
		cout<<y+remA1-y*k<<"\n";
	}

	// m-=usedA1;
	// lli fancyK = m/k;
	// lli fancy1 = m-k*fancyK;
	
	// if(fancy1!=0 && a1-usedA1+fancy1 >= k)
	// {
	// 	cout<<fancyK+1<<"\n";
	// 	return;
	// }
	// cout<<fancyK+fancy1<<"\n";
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

