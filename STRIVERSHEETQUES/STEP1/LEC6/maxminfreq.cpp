#include<bits/stdc++.h>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here


    unordered_map<int, int > mpp;

    int n  = v.size();
    for(int i= 0; i<n; i++) {
      mpp[v[i]]++;
    }

    
    int maxFreq = 0;
    int maxFreqElement = 0;

    for (auto &it : mpp) {
      if (it.second > maxFreq or (it.second == maxFreq and it.first < maxFreqElement)) {
              maxFreq = it.second;
              maxFreqElement = it.first;
      }
    }

    int minFreq = INT_MAX;
    int minFreqElement = 0;
    for (auto &it : mpp) {
      if (it.second < minFreq or (it.second == minFreq and it.first < minFreqElement)) {

              minFreq = it.second;
              minFreqElement = it.first;

      }
    }

    return {maxFreqElement, minFreqElement};
}

int main(){




}