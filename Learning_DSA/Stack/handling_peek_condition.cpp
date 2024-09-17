    // Handling the condition when peek element is '-1' but the stack shows that it is empty
#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
        bool flag;
    // constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag=1;                             // stack ke under koi value nahi hain to , flag ka value 1 hoga
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
            cout << "pushed " << value << " into the stack\n";
            flag=0;    
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
            if(top==-1){
                flag=1;               // agar  flag ka value minus one ho jaaye pop karte karte to , flag ka value one bana dena
            }
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
            cout<<"The value at the peek of the stack is : ";
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
    // s.peek();
    // s.push(-1);
    // cout<<s.peek();

    int value= s.peek();
    if(s.flag==0)
    cout<<value;
}