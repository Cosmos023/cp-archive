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

const int MAXN = 1000001;
vector<int> spf(MAXN + 1, 1);
void sieve()
{
    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 1) { 
            
            for (int j = i; j <= MAXN; j += i) {
                if (spf[j]== 1) 
                    spf[j] = i;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    bool d = false;
    for(int i=1; i<n; i++) {if(a[i-1]>a[i]) d = true;}
    if(!d){cout<<"Bob\n";return;}
    int M = -1;
    for(int i=0; i<n; i++)
    {
        int l = spf[a[i]];
        while(a[i]>1)
        {
            if(spf[a[i]]!=l)
            {cout<<"Alice\n"; return;}
            a[i]/=spf[a[i]];
        }
        if(l>=M) M = max(l, M);
        else
        {
            cout<<"Alice\n"; return;
        } 
    }
    cout<<"Bob\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

