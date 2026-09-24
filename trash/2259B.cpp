#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
const ll mod = 1e9+7;

void solve()
{
	int n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	int o=0,e1=0,e2=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2) o++;
		else
		{
			if(a[i]%4==0) e2++; else e1++;
		}
	}
	cout<<max(o,max(e1,e2))<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t; while(t--) { solve(); }
}