#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);


    // vector<int>::iterator it = v.begin();
    // it++;

    // cout << *(it) << " ";

    // it = it + 2;


    // vector<int>::iterator it = v.end()-1;
    // cout << *(it) << " ";


    // cout << v[0] << " " << v.at(1) << endl;
    // cout << v.back()<< " ";

    // for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
    //     cout << *(it) << " " << endl;

    // }
    

    for (auto it = v.begin(); it!= v.end(); it++){
        cout << *(it) << " ";

    }

    for(auto it : v){
        cout << it << " ";

    }

    


    


}