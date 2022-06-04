#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    int i;
    for(i=p.size()-1;i>0;i--)
    {
        if(p[i]>p[i-1])
        {
            int j=i;
            int k=i;
            for(;j<p.size();j++)
            {
                if(p[j]>p[i-1])
                    k=j;
            }
            swap(p[i-1],p[k]);
            sort(p.begin()+i,p.end());
            return p;
        }
    }
    reverse(p.begin(),p.end());
    return p;
    //  Write your code here.
}
