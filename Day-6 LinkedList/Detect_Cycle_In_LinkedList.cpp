Approach 1 - linkedList Cycle Method - Using Hashinh , T.C - O(N) , S.C - O(N);

//code
bool cycleDetect(node* head) {
    unordered_set<node*> hashTable;
    while(head != NULL) {
        if(hashTable.find(head) != hashTable.end()) return true;
        hashTable.insert(head);
        head = head->next;
    }
    return false;
}

Approach 2 - Most Optimal Solution - T.C- O(N), S.C - O(N)
  //code
  bool cycleDetect(node* head) {
      Node* slow = head;
      Node* fast = head;
      while(fast->next != NULL && fast->next->next)
      {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
          return true;
      }
    return false;
}
  
