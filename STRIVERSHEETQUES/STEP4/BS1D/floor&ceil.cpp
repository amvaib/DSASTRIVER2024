 vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
         int n = arr.size();
    sort(arr.begin(), arr.end());
    
    int low = 0, high = n-1;
    int lower = -1, upper = -1;
    
    // Find floor
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= x) {
            lower = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    // Reset low and high for finding ceil
    low = 0;
    high = n - 1;
    
    // Find ceil
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            upper = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return {lower, upper};

    }