// //BRUTEFORCE APPROACH

#include<bits/stdc++.h>
using namespace std;


// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     // Write your code here

//     int n1 = a.size();
//     int n2 = b.size();

//     set<int> st;

//     for(int i = 0; i<n1; i++){
//         st.insert(a[i]);

//     }

//     for(int i = 0; i<n2; i++){
//             st.insert(b[i]);

//         }


//     vector<int> temp;

//     for(auto it: st){
//         temp.push_back(it);

//     }

//     return temp;
    
    
// }



//OPTIMAL APPROACH


vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
    int i =0;
    int j =0;
    
    vector<int> unionArr;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(unionArr.size()== 0 || unionArr.back()!= arr1[i]){
                unionArr.push_back(arr1[i]);
                }
                
                i++;
            }
            
            else{
                if(unionArr.size()==0 || unionArr.back()!= arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                
                j++;
            }
            
        }
        
        while(i<n){
            if(unionArr.size()==0 || unionArr.back()!= arr1[i]){
                unionArr.push_back(arr1[i]);
            }

            i++;
        }

        while(j<m){
            if(unionArr.size()==0 || unionArr.back()!= arr2[j]){
                unionArr.push_back(arr2[j]);
            }

            j++;
        }
        
        
        
        return unionArr;
        
    }