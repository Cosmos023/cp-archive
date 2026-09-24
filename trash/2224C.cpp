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
	int n;
	cin >> n;
	string a,b; cin>>a>>b;
	if(a[0]==')'||b[0]==')'||a[n-1]=='('||b[n-1]=='(')
	{
		NO; return;
	}
	int n1=0, n2=0;
	for(int i = 0; i<n; i++)
	{
		if(a[i]!=b[i])
		{
			if(n1<n2)
			{
				n1++; n2--;
			}
			else
			{
				n1--; n2++;
			}
		}
		else
		{
			if(a[i]=='(') n1++;
			else n1--;
			if(b[i]=='(') n2++;
			else n2--;
		}
		if(n1<0||n2<0)
		{
			NO; return;
		}
	}
	if(n1==0 && n2==0) YES else NO;
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

