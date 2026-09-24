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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

map<int, bool> done;

int comp(vector<int>& a, vector<int>& b)
{
	if(a.size()==0) return 1;
	if(b.size()==0) return -1;
	string sa = "",sb="";
	for(int x:a)
	{
		if(done.find(x)==done.end()) sa+=(x+'0');
	}
	for(int x:b)
	{
		if(done.find(x)==done.end()) sb+=(x+'0');
	}
	if(sa>sb) return 1;
	else return -1;
}

void solve()
{
	done.clear();
	int n;
	cin >> n;
	vector<int>a[n];
	int pres = 0;
	vector<int> present(1000005, 0);
 	for(int i=0; i<n; i++)
 	{
 		int li;
 		cin >> li;
 		while(li--)
 		{
 			int x; cin>>x;
 			if(present[x]==0) pres++;
 			present[x] = 1;
 			if(find(a[i].begin(),a[i].end(),x)==a[i].end())
 				a[i].push_back(x);
 			reverse(a[i].begin(),a[i].end());
 		}
 	}
 	vector<int> ans(pres, -1);
 	int k = 0;
 	while(k<n)
 	{
	 	vector<int>& M = a[0];
	 	int ind = 0;
	 	for(int i = 1; i<n; i++)
	 	{
	 		if(comp(M,a[i])==1)
	 		{
	 			M = a[i];
	 			ind = i;
	 		}
	 	}
	 	for(int i = 0; i<M.size(); i++)
	 	{
	 		done[M[i]]=true;
	 		ans[k] = M[i];
	 		k++;
	 	}
	 	a[ind].clear();
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

