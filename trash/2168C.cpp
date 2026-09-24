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

void solveF()
{
	int x;
	cin >> x;
	x--;
	vector<int> a(20,0);
 	for(int i=0; i<15; i++)
 	{
 		if((x>>i)&1) a[i]=1;
 	}
 	int XOR = 0;
 	for(int i = 0; i<15; i++)
 	{
 		if(a[i]) XOR^=(i+1);
 	}
 	a[19] = __builtin_popcount(XOR)%2;
 	for(int i = 0; i<4; i++)
 	{
 		if((XOR>>i)&1) a[i+15]=1;
 	}
 	vi ans;
 	for(int i = 0; i<20; i++)
 	{
 		if(a[i]) ans.push_back(i+1);
 	}
 	cout<<ans.size()<<"\n";
 	pL(ans);
}

void solveS()
{
	int n; cin>>n;
	vi a(20,0);
	for(int i = 0; i<n; i++)
	{
		int y; cin>>y;
		a[y-1]=1;
	}
	int XOR = a[15]+(a[16]<<1)+(a[17]<<2)+(a[18]<<3);
	int ans = 0;
	int X = 0;
	for(int i = 0; i<15; i++)
	{
		if(a[i]) 
		{
			ans = ans+(1<<i);
			X^=(i+1);
		}
	}
	if(__builtin_popcount(XOR)%2 != a[19])
	{
		cout<<ans+1<<"\n"; return;
	}
	if(XOR == X)
	{
		cout<<ans+1<<"\n"; return;
	}
	for(int i = 0; i<15; i++)
	{
		if(a[i])
		{
			if((X^(i+1)) == XOR)
			{
				cout<<ans-(1<<i)+1<<"\n"; return;
			}
		}
		else
		{
			if((X^(i+1)) == XOR)
			{
				cout<<ans+(1<<i)+1<<"\n"; return;
			}
		}
	}
	cout<<ans+1<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	string s; cin>>s;
	cin >> t;
	while(t--)
	{
		if(s=="first") solveF();
		else solveS();
	}
}

