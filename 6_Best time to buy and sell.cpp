#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int x=0;
    int mini=prices[0];
    for(int i=0;i<prices.size();i++)
    {
        x=max(x,prices[i]-mini);
        mini=min(mini,prices[i]);
    }
    return x;
    // Write your code here.
}
