#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int> st;
    //SORTED AND UNIQUE

    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);//{1,2,3,4}

// Functionality of insert in vector can be used also, that only increases efficiency

//begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

//{1,2,3,4,5}

auto it = st.find(3);
auto p = st.find(6);

st.erase(5);

int cnt = st.count(1);

auto it  = st.find(3);
st.erase(it); // it takes constant time

//{1,2,3,4,5}

auto it1 = st.find(2);

auto it2 = st.find(4);

st.erase(it1,it2);//after erase {1,4,5} [first,last)









    

}