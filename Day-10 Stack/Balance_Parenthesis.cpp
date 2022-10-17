Using Stack

public:
    bool isValid(string s) {
        stack<char>st;
  
  for(int i = 0;i<s.length();i++)
  {
    if(s[i] == '(' || s[i] == '{' || s[i] == '[')
      st.push(s[i]);
    
    else{
      if(st.empty()){
         return false;
      }
      char topElement = st.top();
      st.pop();
         
       if( (s[i] == ')' && topElement == '(') || (s[i] == '}' && topElement == '{') || (s[i] == ']' && topElement == '[') ) continue;
        else return false;
    }
  }
          return st.empty();
    }
};
