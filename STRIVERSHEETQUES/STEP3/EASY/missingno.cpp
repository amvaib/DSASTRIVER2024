// OPTIMAL APPROACH 1 --->

// int missingNumber(vector<int>& nums) {
        
//         int n = nums.size();
//         int sum = (n*(n+1))/2;
//         int s1= 0;


//         for(int i =0; i<n; i++){
//             s1 += nums[i];


//         }


//         return sum-s1;

//     }