#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
    {

       //code here
        for(int i = 0; i<=n-2; i++){
            int mm = i;
            for(int j = i; j<=n-1; j++){
                if(arr[j]<arr[mm]){
                    mm = j;
                };
                
            };
                
            int temp = arr[mm];
            arr[mm] = arr[i];
            arr[i] = temp;
                
                
        }       
       
    }

int main(){



}