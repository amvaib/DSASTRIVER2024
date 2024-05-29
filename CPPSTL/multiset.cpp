#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int> ms;
    //SORTED BUT NOT UNIQUE

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);//{1,1,1,1}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1);
    //count the number of one's

    ms.erase(ms.find(1));


    //ms.erase(ms.find(1) , ms.find(1)+2);

    //rest all functions same as set



}