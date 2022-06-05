#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long x=0;
    for(int i=0;i<n;i++)
    {
        x+=arr[i];
        if(x<0)
            x=0;
        else
            sum=max(sum,x);
    }
    return sum;
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}
