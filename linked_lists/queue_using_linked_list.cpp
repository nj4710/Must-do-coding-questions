/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
        // Your Code
       QueueNode *newnode= (QueueNode*)malloc(sizeof(struct QueueNode));
       newnode->data = x;
       newnode->next = NULL;
       if(rear == NULL)
       {
           rear = newnode;
           front  = newnode;
       }
       else
       {
           rear->next = newnode;
           rear = newnode;
       }
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        // Your Code    
        if(front == NULL)
          return -1;
        struct QueueNode *temp = front;
        int val = temp->data;
        front = front->next;
          if(front == NULL)
        rear = NULL;
        free(temp);
        return val;
}
