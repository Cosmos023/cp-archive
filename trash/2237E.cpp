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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1,-1);
	vector<int> b(n+1,-1);
 	for(int i=0; i<n; i++) cin >> a[i+1];
 	si kn,dk;
 	for(int i=0; i<n; i++) dk.insert(i+1);
 	for(int i=0; i<n; i++) 
 	{
 		cin >> b[i+1];
 		if(b[i+1]!=-1)
 		{
 			kn.insert(i+1); dk.erase(i+1);
 		}
 	}
 	// pL(b);
 	// pL(dk); pL(kn); cout<<endl;
 	while(!kn.empty())
 	{
 		int k = *kn.begin();
 		if(b[a[k]]==-1)
 		{
 			b[a[k]]=a[b[k]];
 			dk.erase(a[k]);
 			kn.insert(a[k]);
 		}
 		else
 		{
 			kn.erase(k);
 		}
 	// pL(kn);cout<<endl;
 	}
 	si left;
 	for(int i=0; i<n; i++) left.insert(i+1);
 	for(int i=1; i<=n; i++)
 	{
 		left.erase(i);
 	}
 	for(int c:left)
 	{
 		if(b[c]==-1)
 		{
 			// b[i]=*left.begin();
 			auto j = left.begin();
 			while(b[a[c]]!=-1) j++;
 			left.erase(j);
 			b[left[i]]=*left[j];
 		}
 	}
 	if(!left.empty())
 	{
 		cout<<"NO\n";
 		return;
 	}
// pL(b);
// 	pL(left)
 	for(int i=0; i<n; i++) left.insert(i+1);

 	for(int i=1; i<=n; i++) left.erase(b[i]);
 	if(!left.empty())
 	{
 		cout<<"NO\n";
 		return;
 	}
 	int y = 1;
 	for(int i=1; i<=n; i++)
 	{
 		if(b[a[i]]!=a[b[i]]) y=0;
 	}
 	if(!y)
 	{
 		NO;
 	}
	else
	{
		YES;
		pL1(b,n);
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

