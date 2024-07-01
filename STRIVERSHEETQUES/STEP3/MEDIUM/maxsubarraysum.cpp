long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long sum = 0;
    long long maxi = LONG_MIN;
    for (int i = 0; i < n; i++) {
        sum+= arr[i];
        if (sum > maxi) {
            maxi = sum;

        }

        if (sum<0) {
            sum = 0;
        }

        if (maxi < 0) {
            maxi = 0;
        }


    }

    return maxi;
}


// if all the element in the array is -ve then apply this 

//     long long maxSubarraySum(int arr[], int n){
        
        
//     long long max = arr[0];
//         long long sum=0;
//         for(int i=0;i<n;i++)
//         {
//             sum += arr[i];
//             if(sum>max)
//                 max = sum;
//             if(sum<0)
//                 sum = 0;
//         }
        
//         return max;
        


//     }