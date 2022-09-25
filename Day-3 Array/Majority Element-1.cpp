Approach 1 - Brute Force - O(n^2), S>C - O(1)
  
Approach 2 - Using Hashmaps - O(nlogn) in case of using inbuilt hashmap of c++ and if we use frequency array then time will be O(n) and 
  space will be S.C - O(n)
  
Approach 3 - Optimal Approach - Moore Voting Alogrithm  - T.C - O(n) , S.C - O(1)
  
  // code
  
   int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
    }
