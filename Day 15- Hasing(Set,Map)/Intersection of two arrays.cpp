Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays.   
  
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
       unordered_map<int,int>mp1;
        unordered_set<int>s;
       
       for(int i = 0;i<n;i++)
       {
           mp1[a[i]]++;
          s.insert(arr[i]); // also use set
       }
      int count  = 0;
       for(int i = 0;i<m;i++)
       {
           if(mp1.find(b[i]) != mp1.end())
                {
                    s.insert(b[i]);
                }
         if(s.find(b[i]) != s.end())
                {
                    count++;
                }
       }
       
       return s.size();
    }
};
