#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int> p = {1,3};

    // cout << p.first<< " " << p.second << endl;

    pair<int , pair<int, int>> o = {1,{3,4}};
    // cout << o.second.first << endl;

    pair<int, int> arr[] = {{1,2}, {2,4}, {5,6}};

    cout << arr[1].second;

}