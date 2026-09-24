#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n, k;
	cin >> n >> k;
	set<int> a;
	set<int> c;
	vector<int> ans;
 	for(int i=0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		a.insert(x);
 		c.insert(x);
 	}
 	while(c.size()!=0)
 	{
 		int x = *c.begin();
 		c.erase(c.begin());
 		ans.push_back(x);
 		int i = 2;
 		while(x*i<=k)
 		{
 			if(a.find(x*i)==a.end())
 			{
 				cout<<"-1\n";
 				return;
 			}
 			else
 			{
 				c.erase(x*i);
 			}
 			i++;
 		}
 	}
 	cout<<ans.size()<<"\n";
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

