#include <bits/stdc++.h> 



    int partition (vector<int> &arr, int low, int high)
    {
       // Your code here
       int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            };
            while(arr[j]> pivot && j>=low+1){
                j--;
            };
            
            if(i<j){
                swap(arr[i], arr[j]);
            };
            
        };
        
        swap(arr[j], arr[low]);
        return j;
        
       
    };

     void quickSort(vector<int> &arr, int low, int high)
    {
        // code here
        if(low<high){
            int pindex = partition(arr, low , high);
            quickSort(arr,low , pindex-1);
            quickSort(arr,pindex+1 , high);
            
        };
        
        
        
    };




vector<int> quickSort(vector<int> arr)
{
    // Write your code here.

    quickSort(arr, 0 , arr.size()-1 );
    return arr;

}
