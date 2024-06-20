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


//OPTIMAL APPROACH 2;

// int missingNumber(int n, vector<int>& arr) {

//         // Your code goes here
        
//         int xor1 = 0;
//         for(int i =1 ; i<=n; i++){
//             xor1 = xor1^i;
//         }
        
//         int xor2 = 0;
//         for(int i = 0; i<n-1; i++){
//             xor2 = xor2^arr[i];
            
//         }
        
//         return xor1^xor2;
        
        
//     }