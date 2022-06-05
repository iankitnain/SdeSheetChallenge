#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &interval)
{
    sort(interval.begin(),interval.end());
    vector<vector<int>> ans;
    int st=interval[0][0];
    int fi=interval[0][1];
    for(int i=1;i<interval.size();i++)
    {
        if(fi<interval[i][0])
        {
            ans.push_back({st,fi});
            st=interval[i][0];
            fi=interval[i][1];
        }
        else
            fi=max(fi,interval[i][1]);
    }
    if(ans.size()==0 || ans[ans.size()-1][0]!=st)
        ans.push_back({st,fi});
    return ans;
    // Write your code here.
}
