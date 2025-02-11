#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v){
    int maxi = INT_MIN;
    int n = v.size();
    for(int i =0; i<n; i++){
        maxi = max(maxi,v[i]);

    }
    return maxi;
}

long long calculateHourly(vector<int> &v, int hourly){
    long long totalH = 0;
    int n = v.size();
    for(int i =0;i<n; i++){
        totalH += ceil((double)v[i]/(double)hourly);
    }
    return totalH;

}






int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int low = 1;
    int high = findMax(v);
    while(low<=high){
        int mid = (low+high)/2;
        long long totalH = calculateHourly(v,mid);
        if(totalH <=h){
            high = mid-1;

        }

        else{
            low = mid+1;
        }
    }

    return low;
}