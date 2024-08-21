 int findKRotation(vector<int> &arr) {
        // Code Here
        
        int n=arr.size();
        int low=0, high=n-1, ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<arr[0]){ // As we need to find out the index of the smallest element as that much place it has been pushed due to rotation
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }