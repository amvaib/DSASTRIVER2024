#include<bits/stdc++.h>
using namespace std;
int main(){
    

    int N ;
    cout << "ENTER A NUMBER : ";
    cin >> N;
    int count = 0;

    int n = N;

    while(n>0){
        int ld= n%10;
        if(N%ld == 0){
            count++;
        } else{
            cout << n<< "NOT DIVISIBLE";

        }
        

        n = n/10;

        
    }

    cout << count;
}