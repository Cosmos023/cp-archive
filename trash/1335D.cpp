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

void ch(string& s,int i)
{
	s[i] = (s[i]-'0'+1)%9 + '1';
}

void solve()
{
	vector<string> a(9);
 	for(int i=0; i<9; i++)
 	{
 		cin >> a[i];
 	}
 	ch(a[0],0);
 	ch(a[1],3);
 	ch(a[2],6);
 	ch(a[3],1);
 	ch(a[4],4);
 	ch(a[5],7);
 	ch(a[6],2);
 	ch(a[7],5);
 	ch(a[8],8);
 	for(int i=0; i<9; i++)
 	{
 		cout<<a[i]<<"\n";
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

