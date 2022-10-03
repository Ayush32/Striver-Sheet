Approach 1 - linkedList Cycle Method - Using Hashinh , T.C - O(N) , S.C - O(N);

//code
bool cycleDetect(node* head) {
    unordered_set<node*> hashTable;
    while(head != NULL) {
        if(hashTable.find(head) != hashTable.end()) return head;
        hashTable.insert(head);
        head = head->next;
    }
    return NULL;
}

Approach 2 - Most Optimal Solution - T.C- O(N), S.C - O(N)
  //code
  // first find the colloision point of fast and slow pointer node
  // then find the starting point of the loop
  bool cycleDetect(node* head) {
      Node* slow = head;
      Node* fast = head;
  Node* entry = head;
      while(fast->next != NULL && fast->next->next)
      {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
          while(slow != entry) {
            slow = slow->next;
            entry = entry->next;
          }
          return slow;
      }
    return NULL;
}
  
