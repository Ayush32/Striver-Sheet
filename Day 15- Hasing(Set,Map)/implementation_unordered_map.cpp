#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<"Hello World";
    unordered_map<string,int>umap;
    umap["Ayush"] = 30;
    umap["Vyshu"] = 40;
    umap["Rohit"] = 89;
    umap["Singh"] = 50;

   
    
    for(auto it  = umap.begin(); it != umap.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    // second method to access umap;
    
    for(auto x : umap){
        cout << x.first << " " << x.second <<endl;
    }
    
    // size
    cout << "Size of Set : " << umap.size() << endl;
    
    //  find() function
    
    string key = "Vyshu";
    
    if(umap.find(key) != umap.end()){
        cout << "Key Found" <<endl;
    }
    else{
        cout << "key not found"<<endl;
    }
    
    // find function can be written aslo like this
    if(umap.find(key) == umap.end()){
        cout << "Key Not Found" <<endl;
    }
    else{
        cout << "key  found"<<endl;
    }
    
    // erase function
    string delete_key = "Ayush";
    
    umap.erase(delete_key);
    cout << "Updated Size of Set : " << umap.size() << endl;
    
    // count function
    
  cout <<  umap.count("Vyshu") << endl;
  
  vector<int>v = {3,4,57,362,53,64,64,43,32,42,5,5,3,1,32,4,2,3};
  unordered_map<int,int>ump;
  for(auto i : v){
      ump[i]++;
  }

    for(auto i : ump){
        cout << i.first <<" " << i.second <<endl;
    }

    return 0;
}
