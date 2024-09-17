#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    // constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    // push   // peek // isEmplty  //IsSize  // pop  //

    // push function
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "pushed " << value << " into the stack\n"
                 << endl;
        }
    }

    // implementing pop function
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack UnderFLow" << endl;
        }
        else
        {
            cout << "Popped the vlaue" << arr[top];
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            cout<<"The value at the peek of the stack is "<<arr[top];
            return arr[top];
        }
    }

    // isSize}
    int isSize()
    {
        cout<<"The size of the stack at the present is "<<top+1<<endl;
        return top + 1;
    }
};

int main()
{

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<endl;
    s.isSize();
    cout<<endl;
    s.pop();
    cout<<endl;
    s.peek();
    cout<<endl;
    s.isSize();
}