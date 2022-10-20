Approach - 1 - Using Temporary Stack - T.C -  O(n^2) S.C - O(n)
  
  stack<int>srotedStack(stack<int>&input)
{
  stack<int>temp;
  
  while(!input.empty()
   {
         int topData = input.pop();
         input.pop();
     
      while(!temp.empty() && topData < temp.top()
      {
        
          input.push(temp.top());
          temp.pop();
        
      }
     temp.push(topData);
   }
   return temp;
}
            
Approach 2 - Using Recursion
 
 void sortedInsert(stack<int>&s)
            {
              // base condition
              
              if(s.empty() ||  || s.top() < num && !s.empty())
              {
                s.push(num);
              }
              int n = s.top();
              s.pop();
              
              sortedInsert(s,n);
              sortedInsert(n);
            }
            
void sortedStack(stack<int>&s)
            {
              // base
              if(s.empty())
                return ;
              
              int topData = s.top();
              s.pop();
              
              sortedStack(s);
              sortedInsert(s,num);
              
           }
