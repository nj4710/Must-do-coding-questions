/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/

/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/

void removeTheLoop(Node *node)
{
     //Your code here
     Node *slow = node;
     Node *fast = node;
     while(slow && fast && fast->next)
     {
         slow = slow->next;
         fast = fast->next->next;
         if(slow == fast)
            break;
     }
     if(slow == fast)
     {
         slow = node;
         while(slow->next != fast->next)
         {
             slow = slow->next;
             fast = fast->next;
         }
         fast->next=NULL;
     }
}
