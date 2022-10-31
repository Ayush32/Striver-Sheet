
class Solution{
    public:
    int kthSmallest(long long A[], long long N,long long k)
     {
         priority_queue<int>maxHeap;
         
         for(int i = 0;i<N;i++)
         {
             maxHeap.push(A[i]);
             
             if(maxHeap.size() > k)
                maxHeap.pop();
         }
         
         return maxHeap.top();
     }
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        
        int   k1Smallest = kthSmallest(A,N,K1);
        int   k2Smallest = kthSmallest(A,N,K2);
        long long  sum = 0;
        
        for(int i = 0;i<N;i++)
            {
                if(k1Smallest < A[i] && k2Smallest > A[i]){
                    sum += A[i];
                }
            }
        
        return sum;
    }
};

