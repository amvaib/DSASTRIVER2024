#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>pq;
    //highest one on top
    //maximum heap
    pq.push(5);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    //{5,4,3,2}

    cout << pq.top() << endl;//prints 5

    pq.pop();//{4,3,2}

    cout << pq.top() << endl;//prints 4

    //size,swap,empty function same as others

    //Minimum Heap

    priority_queue<int , vector<int> , greater<int>> mh;
    mh.push(3);
    mh.push(4);
    mh.push(6);
    mh.push(9);

    cout << mh.top();//{3,4,6,9} prints 3

}