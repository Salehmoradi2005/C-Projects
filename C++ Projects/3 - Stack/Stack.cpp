#include <iostream>

using namespace std;


class Stack {
public : 
    int ArrayLength;
    int top = -1;

    Stack(int LENGTH) {
        ArrayLength = LENGTH;
        STORAGE = new int[ArrayLength];
    }

    void Push(int IN) {
        if (top < ArrayLength - 1) {
            STORAGE[++top] = IN;

            cout << "The value " << IN << "  has been pushed to the stack" << endl;
        }
        else {
            cout << "Stack is Full!" << endl;
        }
    }
    void Pop() {
        if (top > -1) {
            int temp = STORAGE[top - 1];
            STORAGE[--top] = 0;

            cout << "The value " << temp << " has been poped from the stack" << endl;
        }
        else {
            cout << "Stack is completly free !" << endl;
        }
    }
    void Show() {
        for (int i = 0; i < ArrayLength; i++)
        {
            cout << STORAGE[i] << endl;
        }
    }
private:
    int* STORAGE;
};




int main()
{
    Stack stack1(5);

    for (int i = 0; i < 8; i++)
    {
        stack1.Push(i);
    }

    //for (int i = 0; i < 8; i++)
    //{
    //    stack1.Pop();
    //}
    cout << endl;
    cout << endl;
    cout << endl;

    stack1.Show();

    return 0;

}
