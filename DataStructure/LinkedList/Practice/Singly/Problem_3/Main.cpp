#include <iostream>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

void MyStack ::push(int x) 
{
    StackNode *newnode = new StackNode(x);
    if (this->top == nullptr)
    {
        this->top = newnode;
        return;
    }
    newnode->next = this->top;
    this->top = newnode;
}

int MyStack ::pop() 
{
    if (this->top == nullptr)
        return -1;
    StackNode *current = this->top;
    int value = current->data;
    this->top = this->top->next;
    delete current;
    return value;
}