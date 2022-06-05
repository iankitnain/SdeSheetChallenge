#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector <vector<long long int>> v(n);
    v[0]={1};
    if(n==1)
        return v;
    if(n>=2)
        v[1]={1,1};
    for(int i=2;i<n;i++)
    {
        vector<long long int> vec(i+1);
        for(int j=0;j<i+1;j++)
        {
            if(j==0 || j==i)
                vec[j]=1;
            else
            {
                vec[j]=v[i-1][j]+v[i-1][j-1];
            }
        }
        v[i]=vec;
    }
    return v;
  // Write your code here.
}
