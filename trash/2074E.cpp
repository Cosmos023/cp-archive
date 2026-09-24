#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ll = long long int;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

int ask(vi& Z)
{
	cout<<"? "<<Z[0]<<" "<<Z[1]<<" "<<Z[2]<<endl;
	int z; cin>>z; return z;
}
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vi Z = {1,2,3};
	int z = ask(Z);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> rand(0, 2);
	while(z!=0)
	{
		Z[rand(gen)]=z;
		z = ask(Z);
	}
	cout<<"! "<<Z[0]<<" "<<Z[1]<<" "<<Z[2]<<endl;
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

