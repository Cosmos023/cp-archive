int K = 25;
vector<vll> st(K+1, vll(n+1,0));
for(int i = 0; i<n; i++)
	st[0][i]=a[i];
for(int i = 1; i<=K; i++)
{
	for(int j = 0; j+(1<<i)-1<n; j++)
	{
		st[i][j] = st[i-1][j] + st[i-1][j+(1<<(i-1))]; // Range Sum
	}
}

while(q--)
{
	int x,y; cin>>x>>y; x--; y--;
	lli ans=0;
	for(int i = K; i>=0; i--)
	{
		if((1<<i)<=y-x+1)
		{
			ans+=st[i][x];
			x+=(1<<i);
			debug(ans, i, x);
		}
	}
	cout<<ans<<endl;
}