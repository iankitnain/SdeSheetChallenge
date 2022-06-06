#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int count1=0;
    int count2=0;
    int ele1=arr[0];
    int ele2=arr[1];
    for(int i=0;i<arr.size();i++)
    {
        if(ele1==ele2 && arr[i]!=ele2)
            ele2=arr[i];
        if(ele1==arr[i] && ele2==arr[i])
        {
            count1++;
            count2++;
        }
        else if(ele1==arr[i])
            count1++;
        else if(ele2==arr[i])
            count2++;
        else if(count1==0 && arr[i]!=ele2)
        {
            ele1=arr[i];
            count1=1;
        }
        else if(count2==0 && arr[i]!=ele1)
        {
            ele2=arr[i];
            count2=1;
        }
        else
        {
            if(count1!=0)
                count1--;
            if(count2!=0)
                count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==ele1)
            count1++;
        if(arr[i]==ele2)
            count2++;
     }
    if(count1>n/3 && count2>n/3 && ele1!=ele2)
        return {ele1,ele2};
    else if(count1>n/3)
        return {ele1};
    else if(count2>n/3)
        return {ele2};
    else
        return {};
    // Write your code here.

}
