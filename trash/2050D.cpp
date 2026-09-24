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

void swa(string& s, int i, int k)
{
	// cerr<<i<<" "<<k<<endl;
	char z = s[k]+(i-k);
	for(int j = k; j>=i+1; j--)
	{
		s[j]=s[j-1];
	}
	s[i]=z;
}

void solve()
{
	string s; cin>>s;
 	for(int i=0; i<s.size(); i++)
 	{
 		int j = i;
 		int k = i;
 		for(; j<i+min(10, (int)s.size()-i); j++)
 		{
 			if((int)s[k]+(i-k)<(int)s[j]+(i-j))
 			{
 				k=j;
 			}
 		}
 		swa(s, i, k);
 		// cerr<<s<<endl;
 	}
 	cout<<s<<"\n";
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

