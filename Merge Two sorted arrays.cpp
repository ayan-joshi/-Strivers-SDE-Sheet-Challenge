#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i = 0;
	int j = 0;
vector<int> merge;
while (i < m && j < n) {
	if (arr1[i] < arr2[j]) {
		merge.push_back(arr1[i++]);

    } else {
      merge.push_back(arr2[j++]);
    }

  }
  while (i < m) {
    merge.push_back(arr1[i++]);
  }
  while (j < n) {
    merge.push_back(arr2[j++]);
  }
  return merge; 
	
}
