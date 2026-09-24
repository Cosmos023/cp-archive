#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
	int a[n];
 	for(int i = 0; i<n; i++) cin >> a[i];
	int b[n];
 	for(int i = 0; i<n; i++) cin >> b[i];
 	lli score = 0LL;
 	for(int i = 0; i<n-1; i++)
 	{
 		if(abs(score-a[i])>abs(b[i]-score))
 			score = score-a[i];
 		else
 			score = b[i]-score;
 	}
 	score = max(score-a[n-1], b[n-1]-score);
 	cout << score << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}