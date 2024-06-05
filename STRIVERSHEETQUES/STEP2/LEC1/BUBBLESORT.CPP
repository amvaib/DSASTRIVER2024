#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
        // Your code here
        
        for(int i = n-1; i>=1; i--){
            int didswap = 0;
            
            for(int j = 0; j<=i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    didswap++;
                    }
            }
            if(didswap == 0){
                break;
            }
        }
    }

int main(){

    

}