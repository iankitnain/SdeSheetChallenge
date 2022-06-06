#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    if(target<mat[0][0] || target>mat[m-1][n-1])
        return false;
    for(int i=0;i<m;i++)
    {
        if(mat[i][0]<=target && mat[i][n-1]>=target)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==target)
                    return true;
            }
            break;
        }
    }
    return false;
    // Write your code here.
}
