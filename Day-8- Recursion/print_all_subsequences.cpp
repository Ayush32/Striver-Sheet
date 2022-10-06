
#include <bits/stdc++.h>

using namespace std;


void printSubs(int ind, vector<int>&ds,int arr[],int n ){
    if(ind == n) {
        for(auto i : ds){
            cout << i << " ";
        }
        if(ds.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return ;
        
    }
    // taken and add into subsequences
    ds.push_back(arr[ind]);
    printSubs(ind + 1, ds,arr,n);
    // not taken and remove from subsequences
    ds.pop_back();
    printSubs(ind +1, ds,arr,n);
}
// 2 1, 2 3, 2 1 3, 1 3,1 , 2,3, {}
int main()
{
    int arr[] = {2,1,3};
    vector<int>ds;
    int  n =  3;
    printSubs(0,ds,arr,n);
    return 0;
}
