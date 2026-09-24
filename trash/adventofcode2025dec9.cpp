#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// lli ans = 0;
	vector<string> vs;
	while(1)
	{
		string s;
		cin >> s;
		if(!size(s))
			break;
		vs.push_back(s);
	}
	vector<int> x;
	vector<int> y;
	// vector<int> z;
	int maxx = -1;
	int maxy = -1;

	for(string st:vs)
	{
		// cout << st << "\n";
		int n1=-1,n2=-1;
		replace(st.begin(), st.end(), ',', ' ');
		stringstream ss(st);
		ss >> n1>>n2;
		x.push_back(n1);
		y.push_back(n2);
		maxx = max(maxx,n1);
		maxy = max(maxy,n2);
		// z.push_back(n3);
	}
	lli m = -1;
	int M = max(maxy,maxx);
	int a[M+1][M+1];
	for(int i = 0 ; i<=M; i++)
	{
		for(int j = 0 ; j<=M; j++)
		{
			a[i][j]=0;
		}
	}
	for(int i = 0 ; i<x.size(); i++)
	{	
		a[y[i]][x[i]] = 1;
	}

	int on = 0;
	for(int i = 0 ; i<=M; i++)
	{
		on = 0;
		for(int j = 0 ; j<=M; j++)
		{
			if(on && a[i][j]==0) a[i][j]=2;
			if(a[i][j]==1) on = 1-on;
		}
	}
	for(int i = 0 ; i<=M; i++)
	{
		on = 0;
		int c =0;
		for(int j = 0 ; j<=M; j++)
		{
			if(on && a[j][i]==0) a[j][i]=2;
			else if(a[j][i]!=0){ on = 1-on; c++;}
			// cout << c<<"\n";
			if(c==2) break;
		}
	}
	// for(int i = 0 ; i<=M; i++)
	// {
	// 	on = 0;
	// 	int c =0;
	// 	for(int j = 0 ; j<=M; j++)
	// 	{
	// 		if(on && a[j][i]==0) a[j][i]=2;
	// 		else if(a[j][i]!=0 && !on){ on = 1-on; c++;}
	// 		else if()
	// 		// cout << c<<"\n";
	// 		if(c==3) break;
	// 	}
	// }


	for(int i = 0 ; i<x.size(); i++)
	{	
		for(int j = 0 ; j<x.size(); j++)
		{		
			for(int k = 0 ; k<x.size(); k++)
			{	
				if(x[j]==x[i]&&y[j]==y[k])
				{
					if(a[x[k]][y[i]]!=0)
					{
						m = max(m, 1LL*(abs(x[k]-x[j])+1)*(abs(y[j]-y[i])+1));
					}
				}
			}
		}
	}

	// cout << m;
	for(int i = 0 ; i<=M; i++)
	{
		for(int j = 0 ; j<=M; j++)
		{
			// cout << a[i][j] << " ";
		}
		// cout << "\n";
	}
	cout << m;
}