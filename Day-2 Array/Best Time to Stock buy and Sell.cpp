Approach -1 Brute Force - O(n^2)- using Two Loops , S.C - O(n)

  // code
  
  int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
          }
        }
      }

    return maxPro;
}

Approach 2 - Optimal Apporach - T.C - O(n) , S.C - O(n)
  
int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice  INT_MAX;
    for (int i = 0; i < n; i++) {
          minPrice = min(arr[i],minPrice);
            maxPro = max(arr[i]-minPrice, maxPro);
          }

    return maxPro;
}
