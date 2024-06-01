vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        if(n==0) return 0;
        else{
            return N*sumOfSeries(N-1);
        }
    }
};