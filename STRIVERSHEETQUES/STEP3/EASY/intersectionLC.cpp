vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int , int> mpp;
        for(auto it : nums1){
            if(mpp[it]==0){
                mpp[it]++;
            }
        }

        vector<int> result;
        for(auto it: nums2){
            if(mpp[it]==1){
                result.push_back(it);
                mpp[it]--;
            }
        }

        return result;

        
    }