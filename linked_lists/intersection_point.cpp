/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */

//This code is repetitive and can be improved later on.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int m=0,n=0;
    Node *temp1 = head1;
    Node *temp2 = head2;
    while(temp1 != NULL)
    {
        m++;
        temp1=temp1->next;
    }
    while(temp2 != NULL)
    {
        n++;
        temp2 = temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
   if(m>n)
   {
       int d = m-n;
       while(d > 0)
       {
           temp1=temp1->next;
           d--;
       }
       while(temp1!=NULL && temp2!=NULL)
       {
           if(temp1 == temp2)
           return temp1->data;
           temp1=temp1->next;
           temp2 = temp2->next;
       }
   }
   else
   {
       int d = n-m;
       while(d>0)
       {
           temp2=temp2->next;
           d--;
       }
       while(temp2 != NULL && temp1 !=NULL)
       {
           if(temp1 == temp2)
            return temp1->data;
            temp1 = temp1->next;
            temp2 = temp2->next;
       }
   }
    
}