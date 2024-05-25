#include<bits/stdc++.h>
using namespace std;
int main(){
    //difference between list and vector is that list can push from front also 

    list<int> ls;
    
    ls.push_back(2);//{2}
    ls.emplace_back(3); //{2,3}
    ls.push_front(5); //{5,2,3}
    ls.emplace_front(4);

    for(auto it: ls){
        cout << it << " "<< endl;
    }






}