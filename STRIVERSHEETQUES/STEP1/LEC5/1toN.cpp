class Solution{
    public:
    //Complete this function
    int i =1;
    void printNos(int N)
    {
        //Your code here
        
        if(i>N){
            return;
        } else{
            cout << i << " ";
            i++;
            printNos(N);
            
            
        }
    }
};