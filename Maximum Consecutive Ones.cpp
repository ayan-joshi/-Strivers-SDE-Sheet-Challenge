int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int maxi = 0;
    int cnt0 = 0;
    
    for(int i = 0, j = 0; i < n; i++){
        if(arr[i] == 0){
            cnt0++;
        }
        while(cnt0 > k){
           if(arr[j] == 0){
               cnt0--;
           }
           j++;
        }

        maxi = max(maxi, i-j+1);
    }

    return maxi;
}
