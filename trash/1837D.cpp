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
	string s; cin >> s;
	vi ans(n, 0);
	int nl = 0, nr = 0;
 	for(int i=0; i<n; i++)
 	{
 		if(s[i]=='(')nl++;
 		else nr++;
 	}
 	if(nl!=nr)
 	{
 		cout<<"-1\n"; return;
 	}
 	s+="!";
 	int i = 0;
 	while(i<n)
 	{
 		int j = i;
 		int n1 = 0, n2 = 0;
 		if(s[i]=='(') n1++;
 		else if(s[i]==')') n2++;
 		while(n1 != n2)
 		{
 			j++;
 			if(s[j]=='(') n1++;
 			else if(s[j]==')') n2++;
 	// cout<<n1<<" "<<n2<<" "<<j<<"\n";
 			if(j==n){cout<<"-1\n"; return;}
 		} 
 		for(int k = i; k<=j; k++) 
 		{
 			if(s[i]=='(') ans[k] = 1; else ans[k]=2;
 		}
 		i=j+1;
 	}
 	set<int> a;
 	for(int i =0;i<n; i++) a.insert(ans[i]);
 	if(a.size()==1) for(int i =0;i<n; i++) ans[i]=1;
 	cout<<a.size()<<"\n";
 	pL(ans);
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

