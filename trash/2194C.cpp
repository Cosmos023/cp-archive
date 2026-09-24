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

void solve()
{
    int n, k; cin>>n>>k;
    vector<string> vs(k);
    for(int i=0;i<k;i++)
    {
        cin>>vs[i];
    }
    vector<set<int>> vsi(n);
    for(int i = 0; i<n; i++)
    {
    	for(int j = 0; j<k; j++)
    	{
    		vsi[i].insert(vs[j][i]);
    	}
    }
    string ans = "";
    for(int i=n; i>=1; i--)
    {
        if(n%i!=0) continue;
        int d=i;
        int f=1;
        for(int j=0;j<n/d;j++)
        {
        	set<int> intersection = vsi[j]; 
            for(int m=0;m<d;m++)
            {
                int idx = n/d*m + j;
                set<int> nw;
                for(int num:vsi[idx])
                {
                	if(intersection.find(num)!=intersection.end())
                	{
                		nw.insert(num);
                	}
                }
                intersection = nw;
            }
            if(intersection.size()==0)
            {
            	f=0; break;
            }
            else
            {
            	ans+=*intersection.begin();
            }
        }
        if(f==1)
        {
        	// cout<<ans<<" "<<d<<"\n";
        	for(int i = 0; i<d;i++)
        	{
        		cout<<ans;
        	}
        	cout<<"\n";
        	return;
        }
        ans="";
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