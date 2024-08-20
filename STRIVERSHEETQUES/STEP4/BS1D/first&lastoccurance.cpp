
//    int lowerBound(vector<int> &arr, int n, int x) {
// 	// Write your code here
// 	int low = 0;
// 	int high = n-1;
// 	int ans = n;
//         while (low <= high) {
// 			int mid = (low+high)/2;
// 			if(arr[mid]>=x){
// 				ans = mid;
// 				high= mid-1;

// 			}
// 			else{
// 				low = mid+1;
// 			}
//         }
// 		return ans;
// }

// int upperBound(vector<int> &arr, int n, int x){
// 	// Write your code here.	
// 	int low = 0;
// 	int high = n-1;
// 	int ans = n;
//         while (low <= high) {
// 			int mid = (low+high)/2;
// 			if(arr[mid]>x){
// 				ans = mid;
// 				high= mid-1;

//                         } else {
//                                 low = mid + 1;
//                         }
//         }
//         return ans;

// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {

//     int lb = lowerBound(arr,n,k);
//     int ub  =  upperBound(arr,n,k);
//     if(lb == n || arr[lb] != k ) return {-1,-1};
//     return {lb, ub - 1};
//     }
    
//SIMPLE BINARY SEARCH 



int lastOcc(vector<int> &arr, int n, int x) {
	int low = 0, high = n-1;
	int last = -1;
        while (low <= high) {
			int mid = (low +high)/2;
                        if (arr[mid] == x) {
                          last = mid;
                          low = mid + 1;
                        } else if (arr[mid] < x)  {
							low = mid+1;

                        } else {
							high = mid -1;
                        }


        }
						return last;


}

int firstOcc(vector<int> &arr, int n, int x) {
	int low = 0, high = n-1;
	int first = -1;
        while (low <= high) {
			int mid = (low +high)/2;
                        if (arr[mid] == x) {
                          first = mid;
                          high = mid -1;
                        } else if (arr[mid] < x)  {
							low = mid+1;

                        } else {
							high = mid -1;
                        }


        }
						return first;


}

pair<int, int> firstandlast(vector<int> &arr, int n, int x) {
	int first = firstOcc(arr, n, x);
        if (first == -1) {
                        return {-1,-1};
        }
		int last = lastOcc(arr,  n,  x);
                return {first , last};
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int , int> ans = firstandlast(arr, n, x);
	if(ans.first == -1) return 0;
	return(ans.second - ans.first +1);
	
}