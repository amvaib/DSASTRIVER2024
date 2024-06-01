#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st;
    //stack follows LIFO -> LAST IN FIRST OUT 

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.emplace(8);

    cout << st.top() << endl;

    cout << st.size() << endl;

    cout << st.empty() << endl;

    stack<int> st1,st2;
    st1.swap(st2);
    




}