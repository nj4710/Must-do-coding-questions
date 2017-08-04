/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void pairWiseSwap(struct node *head)
{
   // The task is to complete this method
   struct node *temp = head;
   while(temp != NULL && temp->next !=NULL)
   {
       int a = temp->data;
       temp->data = temp->next->data;
       temp->next->data = a;
       temp = temp->next->next;
   }
}