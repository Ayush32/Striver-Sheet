Approach - 1 - Using Sorting Method - T.C - O(N*logN), S.C = O(1);

Approach - w - Counting Method - T.C - O(N), S.C = O(1);
// solution
void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0)
                count0++;
            if(nums[i] == 1)
                count1++;
            if(nums[i] == 2)
                count2++;
        }
        
       int i = 0;
       int n =  nums.size()-1;
        while(count0 > 0){
            nums[i++] = 0;
            count0--;
            }
        while(count1 > 0){
            nums[i++] = 1;
            count1--;
        }
        while(count2 > 0){
            nums[i++] = 2;
            count2--;
        }
    }

Approach 3 - Dutch National Flag Algo - Most Optimal Solution - T.C - O(N), S.C - O(1)

void sortColors(vector<int>& nums) {
    int low = 0,high = nums.size()-1, mid = 0;
    
    while(mid <= high) {
          if(nums[mid] == 0){
                swap(nums[mid],nums[start]);
                mid++;
                start++;
            }
            
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[end],nums[mid]);
                end--;
            }
                
    }
