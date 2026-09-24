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
	int n, x, y;
	cin >> n>>x>>y;
	vector<int> a(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	int i = min_element(a.begin()+x+1, a.begin()+y+1)-a.begin();
 	
 	vi in;
 	vi out;
 	for(int k = i; k<=y; k++) in.push_back(a[k]);
 	for(int k = x+1; k<i; k++) in.push_back(a[k]);
 	for(int k = 1; k<=x; k++) out.push_back(a[k]);
 	for(int k = y+1; k<=n; k++) out.push_back(a[k]);
 	bool done = false;
 	for(int i = 0; i<out.size(); i++)
 	{
 		if(!done && out[i]>in[0])
 		{
 			for(int j = 0; j<in.size(); j++)
 			{
 				cout<<in[j]<<" ";
 			}
 			done = true;
 		}
 		cout<<out[i]<<" ";
 	}
 	if(!done)
 	{
		for(int j = 0; j<in.size(); j++)
		{
			cout<<in[j]<<" ";
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

