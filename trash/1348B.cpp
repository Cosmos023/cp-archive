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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	int n, k;
	cin >> n>>k;
	vector<int> a(n);
	set<int> s;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		s.insert(a[i]);
 	}
 	int M = *max_element(all(a));
 	if(k<s.size())
 	{
 		cout<<"-1\n"; return;
 	}
 	if(s.size()<k)
 	{
 		for(int i = 1; i<=k; i++)
 		{
 			s.insert(i);
 			if(s.size()==k) break;
 		}
 	}
 	cout<<s.size()*n<<"\n";
 	for(int i=1; i<=n; i++)
 	{
 		for(int x:s)
 		{
 			cout<<x<<" ";
 		}
 	}
 	cout<<"\n";
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

