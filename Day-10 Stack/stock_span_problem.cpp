class StockSpanner {
public:
    stack<pair<int,int>>st;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int day = 1;
        while(!st.empty() && st.top().first <= price){
            day += st.top().second;
            st.pop();
        }
        st.push({price,day});
         return day;
    }
   
};
