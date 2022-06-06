#include <bits/stdc++.h> 
int dp[16][16];
int sol(int m,int n)
{
    if(m==1 || n==1)
        return dp[m][n]=1;
    if(dp[m][n]!=-1)
        return dp[m][n];
    return dp[m][n]=sol(m-1,n)+sol(m,n-1);
}
int uniquePaths(int m, int n) {
    memset(dp,-1,sizeof(dp));
    if(m==1 || n==1)
        return 1;
    return sol(m,n);
	// Write your code here.
}
