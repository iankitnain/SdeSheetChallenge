#include<bits/stdc++.h>

long long merge(long long *arr,long long a[],int l,int m,int r)
{
    int ans=0;
    int i=l;
    int j=m;
    int k=l;
    while(i<m && j<r+1)
    {
        if(arr[i]<=arr[j])
            a[k++]=arr[i++];
        else
        {
            ans+=(m-i);
            a[k++]=arr[j++];
        }
    }
    
    while(i<m)
        a[k++]=arr[i++];
    
    while(j<r+1)
        a[k++]=arr[j++];
    
    for(i=l;i<=r;i++)
        arr[i]=a[i];
 
    return ans;
}

long long m_s(long long *arr,long long a[],int l,int r)
{
    int m,ans=0;
    if(l<r)
    {
        m=(l+r)/2;
        ans+=m_s(arr,a,l,m);
        ans+=m_s(arr,a,m+1,r);
        
        ans+=merge(arr,a,l,m+1,r);
    }
    return ans;
}
long long getInversions(long long *arr, int n){
    long long a[n]={0};
    return m_s(arr,a,0,n-1);
    // Write your code here.
}
