#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cin>>x;
    int n = x;

   int ans = 0;
    
    for(int i = 0; x!=0; i++){

        int digit = x%10;

        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            return 0;
        }

        ans = (ans*10)+ digit;

        x = x/10;
}

if(ans==n){
    return true;
} else{
    return false;
}

}