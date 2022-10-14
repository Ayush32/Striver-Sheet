class Stack {
  int *arr;
  int top;
  int size;
  public : 
  Stack()
  {
    top = -1;
    size = 1000;
    arr = new int [size];
  }
  
  void push(int x)
  {
    top++;
    arr[top] = x;
  }
  
  int top(){
    int poppedElement = arr[top];
    top--;
    return poppedElement;
  }
  
  int top()
  {
    return arr[top];
  }
  int size()
  {
    return top+1;
  }
  
  bool isEmpty()
  {
    if(top == -1)
      return true;
    else
      return false;
  }

}
