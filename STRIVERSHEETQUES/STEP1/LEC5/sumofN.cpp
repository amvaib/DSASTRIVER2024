class Solution {
  public:
    long long sumOfSeries(long long n) {
        if(n==0) return 0;
        else{
            return n+sumOfSeries(n-1);
        }
        // code here
    }
};