#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
      vector<int> ans;
    for(int i=0;i<k;i++){
        ans.insert(ans.end(), kArrays[i].begin(), kArrays[i].end());
    }
    sort(ans.begin(), ans.end());
    
    return ans;
}
