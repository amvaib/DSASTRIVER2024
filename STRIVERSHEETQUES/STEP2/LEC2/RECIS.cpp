//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    
    public:
    void swap(int &a , int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    public:
    void insert(int arr[], int i)
    {
        //code here
        if(i == 0){
            return;
        }
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);  
        }
        else{
            return;
        }
        
        insert(arr , i-1);
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        if(n==0){
            return;
        }
        insertionSort(arr,n-1);
        insert(arr,n-1);
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends