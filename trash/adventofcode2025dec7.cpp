#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

 
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
	int n = vs[0].size();
	int p[n];
	for(int i=0; i<n; i++) p[i] = 0;
	int pc[n];
	for(int i=0; i<n; i++) pc[i] = 0;
	int pco[n];
	for(int i=0; i<n; i++) pco[i] = 0;

	int S;
	for(S = 0; S<n; S++)
	{
		if(vs[0][S]=='S')
			break;
	}
	// int ans = 0;
	// for(int i=0; i<n; i++)
	// {
	// 	for(int k=0; k<n; k++) pc[k] = 0;
	// 	pc[i] = 1;
	// 	for(int k=0; k<n; k++) pco[k] = pc[k];
	// 	int y = 1;
	// 	for(int j=vs.size()-2; j>=2; j-=2)
	// 	{
	// 		for(int m=0; m<(n); m++)
	// 		{
	// 			int n = 0;
	// 			if(vs[j][m]=='^' && pco[m]==1)
	// 			{
	// 				if(y>0)
	// 					y--;
	// 				pc[m]=0;
	// 			}
	// 			else if(m!=0 && vs[j][m-1]=='^' && pco[m]==1)
	// 			{
	// 				// y++;
	// 				n++;
	// 				pc[m]=0;
	// 				pc[m-1]=1;
	// 			}
	// 			else if(m!=(n-1)&&vs[j][m+1]=='^' && pco[m]==1)
	// 			{
	// 				// y++;
	// 				n++;
	// 				pc[m]=0;
	// 				pc[m+1]=1;
	// 			}
	// 			if(n==2) y++;
	// 		}
	// 	}
	// 	// if()
	// 	cout << y << " ";
	// 	ans+=y;
	// }
	// cout << "\n";
	// // part 1
	// p[S] = 1;
	// int ans = 0;
	// for(int i=2; i<vs.size(); i+=2)
	// {
	// 	// cout << vs[i]
	// 	for(int k=0; k<n; k++) cout <<p[k] <<" ";
	// 		cout << "\n";
	// 	for(int j=0; j<n; j++)
	// 	{
	// 		// cout << vs[i][j] << "vs[i][j]";
	// 		if(vs[i][j]=='^')
	// 		{
	// 			if(p[j]==1)
	// 			{
	// 				p[j]=0;
	// 				if(j!=0)
	// 					p[j-1]=1;
	// 				if(j!=(n-1))
	// 					p[j+1]=1;
	// 				ans++;
	// 			}
	// 		}
	// 	}
	// }


	int aa[vs.size()/2][n];
	p[S] = 1;
	int ans = 0;
	for(int i=2; i<vs.size(); i+=2)
	{
		// cout << vs[i]
		for(int k=0; k<n; k++) aa[i/2-1][k]=p[k];
		// for(int k=0; k<n; k++) cout <<p[k] <<" ";
			// cout << "\n";
		for(int j=0; j<n; j++)
		{
			// cout << vs[i][j] << "vs[i][j]";
			if(vs[i][j]=='^')
			{
				if(p[j]==1)
				{
					p[j]=0;
					if(j!=0)
						p[j-1]=1;
					if(j!=(n-1))
						p[j+1]=1;
					// ans++;
				}
			}
		}
	}
	for(int k=0; k<n; k++) aa[vs.size()/2-1][k]=p[k];
	for(int i=0; i<vs.size()/2; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << aa[i][j] << " ";
		}
		cout << "\n";
	}
	// for(int k=0; k<n; k++) cout <<p[k] <<" ";
	// 		cout << "\n";
	cout << "fhoua\n";
	int le = 0;
	for(int i=1; i<vs.size()/2; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(aa[i][j]>=1 && vs[2*i-2][j]=='^')
			{
				int n=0;
				if(j!=0)
					n+=aa[i-1][j-1];
				if(j!=(n-1))
					n+=aa[i-1][j+1];
				// n+=aa[i-1][j];
				aa[i][j]=n;
			}
			else if(aa[i-1][j]>=1)
			{
				aa[i][j]=aa[i-1][j];
				// le+=aa[i-1][j];
			}

			// if(j!=0&&j!=(n-1) && aa[i-1][j-1]==0 && aa[i-1][j+1]==0)
			// 	aa[i][j] = aa[i-1][j];
			// if(i>1)
			// {
			// 	int q = aa[i-1][j]-aa[i-2][j];
			// 	if((q==1 ||q==0) && aa[i-2][j]!=0)
			// 		aa[i][j]--;
			// }
		}
		cout << "\n";
	}
	for(int i=0; i<vs.size()/2; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << aa[i][j] << " ";
		}
		cout << "\n";
	}
	cout << le << "\n";
	cout << ans;
}
