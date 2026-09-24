#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	string a, b;
	cin>>a>>b;

	if(a==b)
	{
		cout<<"0\n\n";
		return;
	}
	if(n==1 || a[0]!=b[0])
	{
		cout<<"-1\n";
		return;
	}
	vector<int> xo(n, 0);
	vector<int> swap;
	vector<int> ans;
	for(int i = 0; i<n; i++)
	{
		if(a[i]!=b[i])
		{
			swap.push_back(i);
			ans.push_back(i+1);
		}
	}

	xo[0] = a[0]-'0';
	xo[1] = (a[0]-'0')^(a[1]-'0');
	for(int i = 2; i<n; i++)
	{
		xo[i] = (a[i]-'0')^xo[i-1];
	}
	int i = swap.size()-1;
	int last = swap.size()-1;
	// pL(swap)
	// pL(xo);
	// pL(b);
	while(i>0)
	{
		if(xo[swap[i]]!=(b[swap[i]]-'0'))
		{
			i--;
			if(i<=0)
			{
				plist(ans, last);
				return;
			}
		}
		else
		{
			for(int j = i; j<=last; j++)
			{
				cout<<ans[j]<<" ";
			}
			last = i;
			i--;
			if(i<=0)
			{
				plist(ans, last);
				return;
			}
		}

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

