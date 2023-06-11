#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
   int n = arr.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        long long s = 0; 
        for (int j = i; j < n; j++) { 
            s += arr[j];
            if (s == 0)
                len = max(len, j - i + 1);
        }
    }
    return len;

}
