void frequencyCount(vector<int>& arr,int N, int P)
    { 
        
        //code here
        unordered_map<int, int> cnt;
        int i =0;
        while(i<N){
            if(arr[i]<=N){
                cnt[arr[i]]++;
            }
            i++;
        }
        
        for(int i =0; i<N; i++){
            arr[i] = cnt[i+1];
        }
        
    }