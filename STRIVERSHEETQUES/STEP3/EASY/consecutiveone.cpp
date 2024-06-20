//LEETCODE

// int findMaxConsecutiveOnes(vector<int>& nums) {
//         int maxi = 0;
//         int cnt = 0;
        
//         for(int i =0; i<nums.size(); i++){
//             if(nums[i] == 1){
//                 cnt ++;
//                 maxi = max(maxi,cnt);
//             }

//             else{
//                 cnt = 0;

//             }
//         }
//         return maxi;
//     }





//GFG WITH CONVERSION FROM DECIMAL TO BINARY

// int maxConsecutiveOnes(int N)
//     {
//         // code here
//         int x = INT_MIN;
//         int count = 0;
//         while(N>0){
//             if(N&1){
//                 count++;
                
//                 x = max(x,count);
//             }
//             else{
                
//                 count  =0;
                
//             }
            
//             N = N>>1;
//         }
        
//         x = max(x,count);
//         return x;
        
        
//     }