Approach - By finding the length of the linked list, T.C -  O(N), S.C - O(N)
  // code
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int len = 0;
        
        while(curr != NULL){
            len++;
            curr = curr->next;
        }
        
        if(len == n) {
            return head->next;
        }
        
        curr = head;
        
        for(int i = 1;i < len - n;i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};

Approach 2 - Using SLow and Fast Pointer and Dummy Node, T.C - O(N), S.C - O(1)
  
  // code
   ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode* start = new ListNode(-1);
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;
        
        for(int i = 1;i<= n;i++)
        {
            fast = fast->next;
        }
        
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        
        return start->next;
    }
};
