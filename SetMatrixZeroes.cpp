#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    map<int,int> row;
    map<int,int> col;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<matrix.size();i++){
       for(int j=0;j<matrix[0].size();j++)
       {
           if(row[i]==1)
           {
               matrix[i][j]=0;
           }
           if(col[j]==1)
           {
               matrix[i][j]=0;
           }
       }
    }
	// Write your code here.
}
