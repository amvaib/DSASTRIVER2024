#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    int sum = 0;
    int a = n;
    int count = (int)(log10(n)+1);

    while(a>0){
        int ld = a%10;
        sum = sum + pow(ld,count);
        a = a/10;
    }

    if(sum == n){
        return true;
    }else{
        return false;
    }

}