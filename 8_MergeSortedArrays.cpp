#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int x=n;
    while(x--)
        arr1.pop_back();
    int i=0;
    int j=0;
    vector <int> ans;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    if(i==m && j==n)
        return ans;
    else if(i==m)
    {
        for(;j<n;j++)
            ans.push_back(arr2[j]);
        return ans;
    }
    else
    {
        for(;i<m;i++)
            ans.push_back(arr1[i]);
        return ans;
    }
    return ans;
	// Write your code here.
}
