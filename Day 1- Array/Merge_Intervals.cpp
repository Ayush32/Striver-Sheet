Approach 1 - 
  
Approach 2 - T.C- O(Nlogn) S.C && -O(N)

//   code
  
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergeIntervals;
        
        if(intervals.size() == 0)
        {
            return mergeIntervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        for(int i = 0;i<intervals.size();i++)
        {
            if(intervals[i][0] <= tempInterval[1]) {
                tempInterval[1] = max(intervals[i][1],tempInterval[1]);
            }
            else  {
                mergeIntervals.push_back(tempInterval);
                tempInterval = intervals[i];
                // tempInterval = intervals[1];
            }
        }
        mergeIntervals.push_back(tempInterval);
     return mergeIntervals;
}
