 // Optimal Solution -->  Using Linked List Cycle Method- Tortoquise 

// Example 1: 
// Input: arr=[1,3,4,2,2]
// Output: 2

// Explanation: Since 2 is the duplicate number the answer will be 2.

// Example 2:

// Input: [3,1,3,4,2]

// Output:3
  
int findDuplicate(vector < int > & nums) {
  int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}
