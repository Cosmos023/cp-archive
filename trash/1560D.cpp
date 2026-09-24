#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

vector<lli> twos;

void solve()
{
	int n;
	cin >> n;
	int m = 99999;
	for(lli pow : twos)
	{
		string p = to_string(pow);
		string num = to_string(n);
		int k = 0;
		int j = 0;
		for(char c:p)
		{
			// int found = 0;
			while(j<num.size())
			{
				if(num[j]==c) 
				{
					k++;
					// found = 1;
					break;
				}
				j++;
			}
			j++;
			// if(!found)
			// 	break;
		}
		// cout<<k<<" ";
		int M = num.size()+p.size()-2*k;
		m = min(m, M);
	}
	cout<<m<<"\n";
}

void tw()
{
	lli n = 1;
	while(n<=1e18 && n>=0)
	{
		twos.push_back(n);
		n*=2;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	tw();
	// plist(twos,twos.size());
	int t=1;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}