#include<bits/stdc++.h>
using namespace std;
int main(){
        long long sumOfDivisors(int N){
    
        // Write Your Code here
        
        long long int sum = 0;
        
        for(int i = 1; i<=N; i++){
            sum += (N/i)*i;
        }
        
        return sum;
    }
};
