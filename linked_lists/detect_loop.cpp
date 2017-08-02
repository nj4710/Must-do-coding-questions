/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/
int detectloop(Node *head)
{
   // your code here
   Node *x = head;
   Node *y = head;
   while(x&&y && y->next!=NULL)
   {
       x= x->next;
       y=y->next->next;
       if(x == y)
       return 1;
      
   }
   return 0;
}