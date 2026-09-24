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
	lli n,m,k;
	cin >> n >> m >> k;
	vector<int> a(k);
 	for(int i=0; i<k; i++)
 	{
 		cin >> a[i];
 	}
 	set<lli> s;
 	lli c = k;
 	int i = 0;
 	while(i<k && s.size()<=m*n-4)
 	{
 		if(a[i]!=c)
 		{
 			s.insert(a[i]);
 			i++;
 			continue;
 		}
 		else
 		{
 			i++;
 			c--;
 			while(s.size()>0 && c == *s.rbegin())
 			{
 				s.erase(c);
 				c--;
 			}
 		}
 	}
 	if(c==0)
 	{
 		cout<<"YA\n";
 	}
 	else
 		cout<<"TIDAK\n";
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

