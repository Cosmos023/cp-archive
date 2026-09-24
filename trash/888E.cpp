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

set<lli> calc(vll& A, int m)
{
	int n = A.size();
	set<lli> res;
	for(int i = 0; i<(1<<n); i++)
	{
		lli z = 0;
		for(int j = 0; j<n; j++)
		{
			if((i>>j)&1)
			{
				z+=A[j];
			}
		}
		res.insert(z%m);
	}
	return res;
}

void solve()
{
	lli n, m;
	cin >> n>>m;
	vector<lli> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		a[i]%=m;
 	}
 	if(n==1)
 	{
 		cout<<a[0]<<"\n"; return;
 	}
 	sor(a);
 	lli Asz = n/2;
 	lli Bsz = n-n/2;
 	vll A, B;
 	for(int i = 0; i<Asz; i++) A.push_back(a[i]);
 	for(int i = 0; i<Bsz; i++) B.push_back(a[Asz+i]);
 		// pL(A); pL(B);
 	set<lli> X = calc(A, m);
 	set<lli> Y = calc(B, m); 
 		// pL(X); pL(Y);

 	lli ans = 0;
 	for(lli c:X)
 	{
 		auto it  = Y.lower_bound(m-c);
 		if(it == Y.begin())
 		{
 			ans = max(ans, c);
 		}
 		else
 		{
 			it--;
 			ans = max(ans, c+*it);
 		}
 		// if(it2 == Y.begin())
 		// {
 		// 	ans = max(ans, c);
 		// }
 		// else
 		// {
 		// 	it2--;
 		// 	ans = max(ans, c+*it2);
 		// }
 	}
 	cout<<ans<<"\n";
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

