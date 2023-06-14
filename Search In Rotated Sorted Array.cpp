int search(int* arr, int n, int key) {
    // Write your code here.
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key) return mid;
        if(arr[low]<=arr[mid]){
            if(key>=arr[low] and key<arr[mid]){
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }
        else if(arr[low]>=arr[mid]){
            if(key>arr[mid] and key<=arr[high]){
                low=mid+1;
            }

            else{
                high=mid-1;
            }

        }

    }

    return -1;
}
