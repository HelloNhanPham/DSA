#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void inOrder(Node* root)
{
    Node* current = root;
    stack<Node*> st;
    while (current!=nullptr || !st.empty())
    {
        while (current!=nullptr)
        {
            st.push(current);
            current = current->left;
        }
        current = st.top();
        cout << current->data << " ";
        st.pop();
        current = current->right;
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    inOrder(root);
    return 0;
}