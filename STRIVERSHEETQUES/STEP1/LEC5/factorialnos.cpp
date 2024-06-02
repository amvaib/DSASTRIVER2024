vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        
        vector<long long> v;
        long long a = 1, b =1;
        
        while(a<=N){
            v.push_back(a);
            b++;
            a = b*a;
            
            
        }
        return v;
    }