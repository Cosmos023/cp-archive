#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int p = 1;
	for(int i = 0; i<x; i++)
		p = (p*2)%(1000000007);
	cout << p << "\n";
}