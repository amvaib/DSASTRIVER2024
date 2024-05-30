#include<bits/stdc++.h>
using namespace std;
int main(){

    //Map stores key in sorted and unique order

    map<int, int> mpp;

    map<int , pair<int,int>> vpp;

    map<pair<int, int> , int> tpp;

    mpp[1] = 2;

    mpp.emplace(3,1);

    mpp.insert({2,4});

    tpp[{2,3}] = 10;

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    // auto it = tpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);


    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //erase , swap , size , empty are same as above
    











}