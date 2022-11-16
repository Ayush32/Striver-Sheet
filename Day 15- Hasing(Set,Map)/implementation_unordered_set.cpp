#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<"Hello World";
    unordered_set<string>s;
    s.insert("Ayush");
    s.insert("Gupta");
    s.insert("Vyshu");
    s.insert("Reddy");
    
    for(auto it  = s.begin(); it != s.end();it++)
    {
        cout << (*it) << endl;
    }
    // size
    cout << "Size of Set : " << s.size() << endl;
    
    //  find() function
    
    string key = "Vyshu";
    
    if(s.find(key) != s.end()){
        cout << "Key Found" <<endl;
    }
    else{
        cout << "key not found"<<endl;
    }
    
    // find function can be written aslo like this
    if(s.find(key) == s.end()){
        cout << "Key Not Found" <<endl;
    }
    else{
        cout << "key  found"<<endl;
    }
    
    // erase function
    string delete_key = "Ayush";
    
    s.erase(delete_key);
    cout << " Updated Size of Set : " << s.size() << endl;
    
    // count function
    
   cout <<  s.count("Vyshu") << endl;

    
    

    return 0;
}
