Approach 1 - T.C - O(N) + O(N/2) , S.C - O(1)

  Approach 2 - T.C - O(N/2) , S.C- O(1)
  
  // code
  
  ListNode* middle(ListNode* head)
{
  ListNode* slow = head;
  ListNode* fast = head;
  
  while(fast && fast ->next)
  {
    slow = slow->next;
    fast = fast->next;
  }
  return slow;
}
