how to find xor with a particular value over all the subsets 
pre = 1; c =0 ; 
dp[c][j] - number of ways at the end of program to form a subset answer as xor value as j
dp[0][0] = 1; 
for(i=0 ; i  < n ; i++)
{
	pre = c; 
	c^=1;
	for(j =0 ; j < 128; j++)
	{
		dp[c][j] = (dp[pre][j] + dp[pre][j^a[i]])%MOD; 
	}
}
