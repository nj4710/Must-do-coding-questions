/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* 
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
};
and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void Stack :: push(int x)
{
        // Your Code
        StackNode *newnode = (StackNode*)malloc(sizeof(struct StackNode));
        newnode->data = x;
        if(top ==NULL)
        {
            newnode->next = NULL;
            top = newnode;
        }
        else
        {
            newnode->next = top;
            top = newnode;    
        }
        
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
        // Your Code
        if(top == NULL)
            return -1;
        StackNode *temp = top;
        int b = temp->data;
        top= temp->next;
        free(temp);
        return b;
}
