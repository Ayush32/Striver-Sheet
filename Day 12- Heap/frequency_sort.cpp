
#include <bits/stdc++.h>

using namespace std;

void frequencySort(vector<int>&v)
{
    unordered_map<int,int>mp;
    
    for(int i = 0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    priority_queue<pair<int,int>> minHeap;
    for(auto i :mp){
        minHeap.push({i.second,i.first});
        
    }
    
    while(minHeap.size() != 0){
        int freq = minHeap.top().first;
        while(freq--)
        {
            cout << minHeap.top().second << " ";
            
        }
        minHeap.pop();
    }
}

int main()
{
    vector<int>v = {1,1,1,3,2,2,4,4};
    frequencySort(v);
    return 0;
}
