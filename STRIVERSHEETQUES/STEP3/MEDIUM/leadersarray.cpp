 vector<int> leaders(int n, int a[]) {
        // Code here
        int maxi = INT_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
      if (a[i] >= maxi) {
          maxi = a[i];
          ans.push_back(a[i]);
      }
    }

    // sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    return ans;