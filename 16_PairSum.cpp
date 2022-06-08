#include <bits/stdc++.h>
#include <vector>
void sol(vector<vector<int>> &dp, vector<vector<int>> &v,vector<int> &arr,int l, int r,int s)
{
    if(l>=r)
        return;
    
    if(dp[l][r]!=0)
        return;
    
    dp[l][r]=1;
    
    if(arr[l]+arr[r]<s)
    {
        sol(dp,v,arr,l+1,r,s);
    }
    else if(arr[l]+arr[r]>s)
    {
        sol(dp,v,arr,l,r-1,s);
        return;
    }
    else
    {
        v.push_back({arr[l],arr[r]});
        sol(dp,v,arr,l+1,r,s);
        sol(dp,v,arr,l,r-1,s);
    }
    
    
    
}
vector<vector<int>> pairSum(vector<int> &arr, int s){
    sort(arr.begin(),arr.end());
    vector<vector<int>> dp(arr.size(),vector<int> (arr.size(),0));
    vector<vector<int>> v;
    sol(dp,v,arr,0,arr.size()-1,s);
    sort(v.begin(),v.end());
    return v;
   // Write your code here.
}
