/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/

void sortList(Node *head)
{
   //Add code here
   Node *temp = head;
   int a=0,b=0,c=0;
   while(temp!=NULL)
   {
       if(temp->data == 0)
        a++;
        else if(temp->data == 1)
            b++;
        else
            c++;
        temp= temp->next;
   }
   temp = head;
   while(a > 0)
   {
       temp->data =0;
       a--;
       temp= temp->next;
   }
   while(b > 0)
   {
       temp->data = 1;
       b--;
       temp = temp->next;
   }
   while(c > 0)
   {
       temp->data = 2;
       c--;
       temp = temp->next;
   }
   
}
