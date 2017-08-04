/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */
#include <stack>
bool isPalindrome(Node *head)
{
    //Your code here
    stack <int> s;
    Node *slow = head;
    Node *fast = head;
    Node *temp = head;
    int mid = 0;
    while(temp != NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    while(slow != NULL)
    {
        int b = s.top();
        if(slow->data != b)
            return false;
        s.pop();
        slow = slow->next;
    }
    return true;
}