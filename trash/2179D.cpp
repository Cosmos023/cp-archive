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
	int num = (1<<n)-1;
	vector<int> ones;
	vector<int> done(num+1, 0);
	for(int i = 0; i<=17; i++)
	{
		ones.push_back((1<<i)-1);
	}
	for(int i = n-1; i>=0; i--)
	{
		cout<<num<<" ";
		done[num]=1;
		num = num & (~(1<<i));
		for(int j = 1; j<(1<<(n-i-1)); j++)
		{
			if(find(ones.begin(),ones.end(),j)!=ones.end())
			{
				continue;
			}
			int k = j*(1<<(i+1))+(1<<(i+1))-1;
			if(!done[k])
				cout<<k<<" ";
			done[k]=1;
		}
	}
	// cout<<"h";
	// for(int i = 0; i<(1<<(n-1)); i++)
	// {
	// 	if(find(ones.begin(),ones.end(),i)!=ones.end())
	// 	{
	// 		continue;
	// 	}
	// 	cout<<i*2+1<<" ";
	// }
	cout<<0<<" ";
	for(int i=1; i<(1<<(n)); i++)
	{
		if(!done[i])
			cout<<i<<" ";
	}


	cout<<"\n";
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