Approach 1 - O(n^3) - Using Three Loops

Approach 2 - O(n^2) - Using Two loops --> elimante third loops\

Approach 3 - O(n) - Optimal - Kaden Algorithm

// code
 int maximumSubarraySum(int arr[], int n)
{
  int curr_sum = 0, maximum_sum = INT_MIN;
  
  for(int i = 0;i<n;i++)
  {
    curr_sum = curr_sum + arr[i];
  
  if(maximum_sum < curr_sum)
    maximum_sum = curr_sum;
  
  if(curr_sum  < 0)
    curr_sum = 0;
  }
  return maximumm_sum;
}
