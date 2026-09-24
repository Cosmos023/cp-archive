#include <bits/stdc++.h>
using namespace std;

int A1[1000005];
int A2[1000005];

int main() 
{
	int n;
	cin >>  n;
	int k = n*(n +1)/ 2;
	if(k%2==1 || n==1 || n==2)
	{
		cout << "NO";
		return 0;
	}
	A1[1]=1;
	A1[2]=1;
	A2[3]=1;
	for(int i = 4; i<=n; i++)
	{
		int h = i/2;
		if(A1[h]==1)
		{
			A2[h]=1;
			A1[h]=0;
			A1[i]=1;
		}
		else if(A2[h]==1)
		{
			A1[h]=1;
			A2[h]=0;
			A2[i]=1;
		}
		else
			A1[i] = 1;
	}
	int s1 = 0, s2 = 0;
	int n1 = 0, n2 = 0;
	for(int i = 1; i<=n; i++)
	{
		if(A1[i])
		{
			s1+=i;
			n1++;
		}
		else if(A2[i])
		{
			s2+=i;
			n2++;
		}
	}
	if(s1==s2)
	{
		cout << "YES\n";
		cout << n1 << "\n";
		for(int i = 1; i<=n; i++)
		{
			if(A1[i])
				cout << i << " ";
		}
		cout << "\n";
		cout << n2 << "\n";
		for(int i = 1; i<=n; i++)
		{
			if(A2[i])
				cout << i << " ";
		}
	}
	else
		cout << "NO";
}