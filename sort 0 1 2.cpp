#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int lindex=0;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(arr[i]==0 && lindex==i)
        {
            i++;
            lindex++;
        }
        else if( arr[i]==0)
        {
            swap(arr[i],arr[lindex]);
            lindex++;
            i++;
        }
        else if(arr[j]==2)
        {
            j--;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[j]);
            j--;
        }
        else
            i++;
    }
   //   Write your code here
}
