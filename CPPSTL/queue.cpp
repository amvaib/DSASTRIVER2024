#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    //QUEUE FOLLOWS FIFO -> FIRST IN FIRST OUT

    q.push(1);
    q.push(2);
    q.push(3);

    q.back() += 5;// 3+5 = 8

    cout << q.back();
    cout << q.front();

    q.pop();

    cout <<  q.front();

    //size swap empty same as stack

    
}