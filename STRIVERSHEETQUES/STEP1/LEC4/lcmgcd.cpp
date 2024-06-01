//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        vector<long long> result;
        
        long long a = A, b = B;
        // code here
    while (a > 0 && b > 0) {
    if (a > b) {
		a = a%b;
    } else {
		b = b%a;
    }

  }
    long long gcd ;
    if (a == 0) {
		gcd = b;
    } else {
		gcd = a;
    }
    
    
    long long lcm = (A/gcd)*B;
    
    result.push_back(lcm);
    result.push_back(gcd);
    
    return result;
    
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends