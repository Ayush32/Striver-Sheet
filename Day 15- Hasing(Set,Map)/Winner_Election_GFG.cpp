class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        Your code here
        Return the string containing the name and an integer
        representing the number of votes the winning candidate got
          // using map
        map<string,int>mp;
        
        for(int i = 0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int candidateVote = INT_MIN;
        vector<string>ans;
        string candidateName = "";
        for(auto i : mp){
            if(i.second > candidateVote)
            {
                candidateVote = i.second;
                candidateName = i.first;
            }
        }
        ans.push_back(candidateName);
        ans.push_back(to_string(candidateVote));
        return ans;
        
        // using unordered_map;
      
        unordered_map<string,int>mp;
        int candidateVote = INT_MIN;
        vector<string>ans;
        string candidateName = "";
         for(int i = 0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto i : mp)
        {
            string key= i.first;
            int val = i.second;
            if(val > candidateVote){
                candidateVote = val;
                candidateName = key;
            }
            else if(val == candidateVote)
            {
                if(key < candidateName)
                    candidateName = key;
            }
        }
        ans.push_back(candidateName);
        ans.push_back(to_string(candidateVote));
        return ans;
    }
};
