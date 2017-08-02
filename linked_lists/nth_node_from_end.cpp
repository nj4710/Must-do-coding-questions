/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *slow=head;
       Node *fast = head;
       while(n>0)
       {
           fast = fast->next;
           n--;
       }
       while(fast!=NULL)
       {
           slow = slow->next;
           fast = fast->next;
       }
       return slow->data;
}