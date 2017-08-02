/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node* reverse(Node *head)
{
  // Your code here
  Node *current=head;
  Node *prev = NULL;
  Node *add;
  while(current!=NULL)
  {
      add = current->next;
      current->next = prev;
      prev = current;
      current = add;
  }
  head = prev;
  return head;
}