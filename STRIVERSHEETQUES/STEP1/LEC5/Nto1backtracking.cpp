class Solution {
  public:
  
        int i = 1;
    void printNos(int N) {
        
        if(i>N){
            return;
        }
        else{
        int current = i;  // Save the current value of i
        i++;  // Increment the global variable for the next call
        printNos(N);  // Recursive call
        cout << current << " "; 
        }
        // code here
        
    }
};