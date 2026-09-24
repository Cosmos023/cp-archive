#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N; // size of array
	cin >> N;

	vector<char> a(N);
	// take input in vector
	for(int i = 0; i<N; i++)
	{
		cin >> a[i];
	}

	int countR=0, countB=0, countG=0;
	for(int i = 0; i < N; i++)
	{
		if(a[i]=='R') countR++;
		else if(a[i]=='B') countB++;
		else countG++;
	}

	for(int i = 0; i < countR; i++)
	{
		a[i] = 'R';
	}
	for(int i = countR; i < countR+countB; i++)
	{
		a[i] = 'B';
	}
	for(int i = countR+countB; i< countR+countB+countG; i++)
	{
		a[i] = 'G';
	}

	for(char c : a)
	{
		cout << c << " ";
	}
}