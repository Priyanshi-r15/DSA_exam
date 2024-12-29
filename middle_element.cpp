#include <iostream>
using namespace std;
class Singly
{
    public :
    int data;
    Singly *next;

};
int middle(Singly *head)
    {
        if (head == NULL)
        {
            return -1;  //if the list is empty -1;
        }
        
        Singly *mid = head;
        Singly *skip = head;
        
        while (skip != NULL && skip->next != NULL)
        {
            mid = mid->next;
            skip = skip->next->next;
        }
        return mid->data;
        
    }
int main()
{
   
    Singly *PTR = NULL; 

    Singly *HEAD = NULL;

    HEAD = new Singly();
    HEAD->data = 45;
    HEAD->next = NULL;


    PTR = HEAD;
    Singly *node ;

    node = new Singly();
    node->data = 30;
    node->next = NULL;
    HEAD->next = node;


    node = new Singly();
    node->data=50;
    node->next = NULL;
    HEAD->next->next = node;

    node = new Singly();
    node->data=100;
    node->next = NULL;
    HEAD->next->next->next = node;

    node = new Singly();
    node->data = 150;
    node->next=NULL;
    HEAD->next->next->next->next=node;

    cout << "The elements of linked list are : " << endl;
    while (PTR != NULL)
    {
       cout << PTR ->data << endl;
      // cout << PTR->next << endl;
       PTR = PTR -> next;
    }
    int ans = middle(HEAD);
    cout << "The middle element is = " << ans << endl;
   
   return 0;
    
}