#include <bits/stdc++.h>

using namespace std;


void printSubs(int ind, vector<int>&ds,int s,int sum,int arr[],int n ){
    if(ind == n) {
        if(s == sum) {
        for(auto i : ds){
            cout << i << " ";
        }
        cout << endl;
    }
        return ;
        
    }
    // taken and add into subsequences
    ds.push_back(arr[ind]);
    s+= arr[ind];
    printSubs(ind + 1, ds,s,sum,arr,n);
    // not taken and remove from subsequences
    ds.pop_back();
    s -=arr[ind];
    printSubs(ind +1, ds,s,sum,arr,n);
}
// 2 1, 2 3, 2 1 3, 1 3,1 , 2,3, {}
int main()
{
    int arr[] = {1,2,1};
    int sum = 2;
    vector<int>ds;
    int  n =  3;
    printSubs(0,ds,0,sum,arr,n);
    return 0;
}
