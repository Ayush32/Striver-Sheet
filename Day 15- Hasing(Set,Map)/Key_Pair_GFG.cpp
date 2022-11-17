class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here4
	    unordered_map<int,int>mp;
	    
	    
	    for(int i = 0;i<n;i++)
	    {
	        
	        if(mp.find(x - arr[i]) != mp.end()){
	            return true;
	        }
	        else{
	            mp[arr[i]]++;
	        }
	    }
	    return false;
	}
};
