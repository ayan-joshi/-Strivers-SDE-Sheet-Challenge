#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int count1=0,count2=0;
	int el1 = INT_MIN;
	int el2 = INT_MIN;
	int n = arr.size();
	for(int i=0;i<n;i++){
		if(count1 == 0 && el2 != arr[i]){
			count1 = 1;
			el1 = arr[i];
		}
		else if(count2 == 0 && el1 != arr[i]){
			count2 = 1;
			el2 = arr[i];
		}
		else if(arr[i] == el1) count1++;
		else if(arr[i] == el2) count2++;
		else{
			count1--,count2--;
		}
			}
	
	vector<int> ls;
	count1 = 0, count2 = 0;
	for(int i=0;i<n;i++){
		if(el1 == arr[i]) count1++;
		if(el2 == arr[i]) count2++;
	}
	int mini = (int)(n/3)+1;
	if(count1 >= mini) ls.push_back(el1);
	if(count2 >= mini) ls.push_back(el2);
	sort(ls.begin(),ls.end());
	return ls;

}
