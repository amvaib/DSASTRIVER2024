#include<bits/stdc++.h>
using namespace std;
    bool comp(pair<int,int> p1, pair<int, int> p2 ){

        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        //they are same

        if(p1.first > p2.first) return true;
        return false;

    }
int main(){




    vector<int> v;

    // sort(a , a+n);
    sort(v.begin(), v.end());

    //for descending order
    // sort(a, a+n, greater<int>);

    pair<int , int> a[] = {{1,2}, {2,1}, {4,1}};

    sort(a , a+3 , comp);


    // int num = 7;

    //this will return no. of set bits
    // int cnt = __builtin_popcount(num);


    long long  num = 145643567543364;
    int cnt = __builtin_popcount(num);

    // cout << cnt;


    string s = "35643";

    do{
        cout << s << endl;
    } while(next_permutation(s.begin() , s.end()));



    // int maxi = *max_element(a , a+n);
    // int min = *min_element(a , a+n);

    


    



}