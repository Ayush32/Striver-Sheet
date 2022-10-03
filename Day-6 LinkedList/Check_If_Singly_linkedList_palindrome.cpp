Approach 1 - Using Hashing extra space - T.C - O(N), S.C - O(N)
  // code
  Node* slow = head;
  stack<int>s;

  while(slow != NULL) {
    s.push(slow->data)
      slow = slow->next;
  
  }

slow = head;

while(slow != NULL) {
  int i = s.top();
  s.pop();
  
  if(slow->data != i)
    return false;
  slow = slow->next;
  
  
}
retur true;
}

Approach 2 - T.C - O(N)
  // first find the middle of the linkedlist
  // reverse node from middle node of the linkedlist
  
  // reverse the linked list
  
  Node* reverse(Node* head)
{
  Node* curr = head;
  Node* prev = NULL;
  Node* next = NULL;
  
  while(curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nex;
    
  }
  return prev;
}

Node *palindrome(Node* head)
{
  Node* slow =  head;
  Node* fast = head;
  
  while(fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  
  slow->next = reverse(slow->next);
  slow = slow->next;
  node* curr = head;
  
  while(slow != NULL)
  {
    if(curr->data != slow->data)
      return false;
    curr = curr->next;
    slow = slow->next;
  }
  return true;
}
