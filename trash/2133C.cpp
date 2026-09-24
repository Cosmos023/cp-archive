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
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<endl;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	string s = "";
 	for(int i=1; i<=n; i++)
 	{
 		s+=(" "+to_string(i));
 	}
 	vi a(n+1, 1);
 	for(int i=1; i<=n; i++)
 	{
 		cout<<"? "<<i<<" "<<n<<s<<endl;
 		cin>>a[i];
 	}
 	int st = max_element(a.begin()+1,a.end())-a.begin();
 	int sz = *max_element(a.begin()+1,a.end());
 	vi ans; ans.push_back(st);
 	while(sz--)
 	{
 		for(int i=1; i<=n; i++)
 		{
 			if(a[i]==sz)
 			{
 				cout<<"? "<<st<<" 2 "<<st<<" "<<i<<endl;
 				int z; cin>>z;
 				if(z==2)
 				{
 					ans.push_back(i);
 					st = i;
 					break;
 				}
 			}
 		}
 	}
 	cout<<"! "<<ans.size()<<" ";
 	pL(ans);
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

