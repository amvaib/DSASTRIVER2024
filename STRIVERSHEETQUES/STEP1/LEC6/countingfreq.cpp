void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        
        
        unordered_map<int , int > mpp;
        for(int i = 0; i<N; i++){
            
            mpp[arr[i]]++;
            
        }
        
        for(int i= 0; i<N; i++){
            arr[i] = mpp[i+1];
        }
    };