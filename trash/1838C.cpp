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

bool isP(lli x)
{
	if(x<=1) return false;
	bool p = true;
	for(lli i = 2; i*i<=x; i++)
	{
		if(x%i==0)
		{
			p = false;
			break;
		}
	}
	return p;
}

void solve()
{
	int n, m;
	cin >> n >> m;
	if(!isP(m))
	{
		int k = 1;
		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<m; j++)
			{
				cout<<k<<" ";
				k++;
			}
			cout<<"\n";
		}
		return;
	}
	if(!isP(n))
	{
		int k = 1;
		for(int i = 1; i<=n; i++)
		{
			for(int j = 0; j<m; j++)
			{
				cout<<i+n*j<<" ";
			}
			cout<<"\n";
		}
		return;
	}
	

	vi row1(m,-1);
	int k = 1;
	for(int i = 0; i<m; i+=2)
	{
		row1[i] = k;
		k+=n;
	}
	for(int i = 1; i<m; i+=2)
	{
		row1[i] = k;
		k+=n;
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			cout<<row1[j]+i<<" ";
		}
		cout<<"\n";
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

