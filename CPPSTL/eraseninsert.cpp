#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v;

    // v.emplace_back(4);
    // v.emplace_back(5);
    // v.emplace_back(6);
    // v.emplace_back(7);

    // v.erase(v.begin()+1);
    // v.erase(v.begin()+2,v.begin()+4);

    // for(auto it : v){
    //     cout << it << " ";

    // }

    //Insert

    vector<int> v(2,100);//{100,100}

    v.insert(v.begin(),300);//{300,100,100}

    v.insert(v.begin()+1 , 2 ,10);//{300,10,10,100,100};

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());
    //{50,50,300,10,10,100,100}

    // cout << v.size();

    v.pop_back();
    //{50,50,300,10,10,100}

    //v1 -> {10,20}
    //v2 -> {30,40}

    //v1.swap(v2); //interchange 

    v.clear();//clears entire vector

    cout << v.empty();






}