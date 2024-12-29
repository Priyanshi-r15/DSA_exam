#include <iostream>
using namespace std;
class Stack
{
    private:
        int capacity;
        int top;
        int *arr;

    public:
        Stack(int capacity)
        {
            this->capacity=capacity;
            top=-1;
            arr=new int[capacity];
        }
        ~Stack()
        {
            delete[] arr;
            cout << "Memory of stack removed !" << endl;
        }
         void push(int element);
         void pop();
         void Display();
};
    void Stack::push(int element)
    {
        if (top == capacity-1)
        {
            cout << "Stack is Full...";
        }
        else
        {
            top++;
            arr[top]=element;
            cout << "Element pushed... " << endl;
        }
        cout << "------------------------------" << endl;
    }
    void Stack::pop(){
        if (top == -1)
        {
           cout << "Stack is empty... " << endl;
        }
        else
        {
            cout << "Element popped = " << arr[top] << endl;
            top--;
        }
        cout << "------------------------------" << endl;
    }
    void Stack::Display(){
        cout << "Elements of stack are: " << endl;
         for (int i = 0; i <= top; i++)
        {
            cout << arr[i];
             cout << endl;
        }
       
        cout << "------------------------------" << endl;
    }
    int main()
{
    int user;
    int capacity;
    cout << "Enter the capacity of stack = ";
    cin >> capacity;

    Stack s(capacity);
    do
    {
      //  cout << "------------------------------" << endl;
        cout << "1) Push an Element " << endl;
        cout << "2) Pop an Element " << endl;
        cout << "3) Display the Stack " << endl;
        cout << "------------------------------" << endl;
        cout << "Enter your choice = ";
        cin >> user;
        cout << "------------------------------" << endl;

        switch (user)
        {
        case 1:
            int element;
            cout << "Enter an element = ";
            cin >> element;
            s.push(element);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.Display();
            break;
        default:
            break;
        }
    } 
    while (user!=0);
}

