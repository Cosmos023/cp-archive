#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> zeros;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		if(a[i]==0) zeros.push_back(i);
 	}

 	if(zeros.size()==0)
 	{
 		cout<<"1\n";
 		cout<<1<<" "<<n<<"\n";
 		return;
 	}

 	if(a[1]==0 && a[n]==0)
 	{
 		cout<<"3\n";
 		cout<<1<<" "<<n/2<<"\n";
 		cout<<2<<" "<<n-n/2+1<<"\n";
 		cout<<"1 2\n";
 		return;
 	}
 	if(a[1]==0 && a[n]!=0)
 	{
 		cout<<"2\n";
 		cout<<1<<" "<<n-1<<"\n";
 		cout<<"1 2\n";
 		return;
 	}
 	if(a[1]!=0 && a[n]==0)
 	{
 		cout<<"2\n";
 		cout<<2<<" "<<n<<"\n";
 		cout<<"1 2\n";
 		return;
 	}

	cout<<"2\n";
	cout<<2<<" "<<n-1<<"\n";
	cout<<"1 3\n";
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