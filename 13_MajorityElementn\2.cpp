#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int freq=0;
    int ans=arr[0];
    for(int i=0;i<n;i++)
    {
        if(freq==0)
            ans=arr[i];
        if(ans==arr[i])
            freq++;
        else
            freq--;
    }
    freq=0;
    for(int i=0;i<n;i++)
        if(arr[i]==ans)
            freq++;
    
    if(freq>n/2)
        return ans;
    else
        return -1;
	// Write your code here.
}
