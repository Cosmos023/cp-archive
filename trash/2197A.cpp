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


int d(int n)
{
	int s = 0;
	while(n>0)
	{	
		s+=(n%10);
		n/=10;
	}
	return s;
}

void solve()
{
	int x;
	cin >> x;
	int i = max(x-2000,1);
	int c = 0;
	while(i<x+2000)
	{
		if(i-d(i)==x) c++;
		i++;
	}
	cout<<c<<"\n";
}

int main()
{
	auto begin = std::chrono::high_resolution_clock::now();
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
}

