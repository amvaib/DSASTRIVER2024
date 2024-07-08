  int xr =0;
    // int n1 = A.size();
    map<int,int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for(int i =0; i<n1; i++){
        xr = xr^A[i];
        int x = xr^ B;
        cnt += mpp[x];
        mpp[xr]++;
    }
    
    return cnt;
    }