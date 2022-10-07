#include <bits/stdc++.h>

using namespace std;


int printSubs(int ind,int s,int sum,int arr[],int n ){
    if(ind == n) {
        if(s == sum) 
        return 1;
       else return 0;
       
        
    }
    // taken and add into subsequences
 
    s += arr[ind];
    int l = printSubs(ind + 1,s,sum,arr,n);
     
    s -= arr[ind];
    int r = printSubs(ind + 1,s,sum,arr,n);
    
    return l + r;
}
// 2 1, 2 3, 2 1 3, 1 3,1 , 2,3, {}
int main()
{
    int arr[] = {1,2,1};
    int sum = 2;
    
    int  n =  3;
    cout << printSubs(0,0,sum,arr,n);
    return 0;
}
