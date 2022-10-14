1 - Using Two Queue

// code
class MyStack {
    private:
            queue<int>q1;
            queue<int>q2;

public:
    MyStack() {
    }
    
    void push(int x) {
        // int s = q.size();
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        // for(int i = 0;i<s;i++)
        // {
        //     q.push(q.front());
        //     q.pop();
        // }
    }
    
    int pop() {
        int popEle = q1.front();
        q1.pop();
        return popEle;
    }
    
    int top() {
        if(q1.empty())
            return -1;
        else
           return q1.front();
    }
    
    bool empty() {
        if(q1.size() == 0)
            return true;
        return false;
    }
};


2--  Using Single Queue

//code 

class MyStack {
    private:
            queue<int>q;


public:
    MyStack() {
    }
    
    void push(int x) {

        q2.push(x);
      
        swap(q1,q2);
        for(int i = 0;i<s;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int popEle = q.front();
        q.pop();
        return popEle;
    }
    
    int top() {
        if(q.empty())
            return -1;
        else
           return q.front();
    }
    
    bool empty() {
        if(q.size() == 0)
            return true;
        return false;
    }
};
