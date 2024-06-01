//APPROACH ONE;

#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n){
    vector<int> ls;
    for(int i =1; i<=sqrt(n); i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it: ls) cout << it << " ";
}

int main(){
//     int n;
//     cout << "ENTER A NUMBER : ";
//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         if(n%i==0){
//             cout << i << " ";

//         }
        
//     }
// }

// //APPROACH 2;

// int* printDivisors(int n, int &size){
//     int* divisor = new int[n];

// // Here, the function allocates an array of integers dynamically with a size of n. This array will store the divisors of n.

//     size = 0;

//      for(int i = 1; i<=n; i++){
//         if(n%i==0){
//             divisor[size] = i;
//             size++;

//         }
        
//     }

//     return divisor;
// }


//APPROACH 3

// void printDivisor(int n){
//     vector<int> ls;
//     for(int i =1; i<=sqrt(n); i++){
//         if(n%i==0){
//             ls.push_back(i);
//             if((n/i)!=i){
//                 ls.push_back(n/i);
//             }
//         }
//     }
//     sort(ls.begin(), ls.end());
//     for(auto it: ls) cout << it << " ";
// }

int n ;
n = 99;
printDivisor(n);

}