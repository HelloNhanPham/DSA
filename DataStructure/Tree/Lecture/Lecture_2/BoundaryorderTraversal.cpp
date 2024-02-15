#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
    Node() : data(0), left(nullptr), right(nullptr) {}
};

Node *insertNode(Node* head, int value)
{
    if (head==nullptr)
        return new Node(value);
    if (head->data < value)
        head->right = insertNode(head->right, value);
    else
        head->left = insertNode(head->left, value);
    return head;
}

void printLeftBoundary(Node* head)
{
    if (head == nullptr)
        return;
    while (head->left!=nullptr)
    {
        cout << head->data << " ";
        head = head->left;
    }
}

void printAllLeaves(Node* head)
{
    if (head!=nullptr)
    {
        printAllLeaves(head->left);
        if (head->left==nullptr && head->right==nullptr)
            cout << head->data << " ";
        printAllLeaves(head->right);
    }
}

void printRightBoundary(Node* head)
{
    if (head == nullptr)
        return;
    stack<Node*> st;
    Node* current = head;
    int cnt = 0;
    while (current!=nullptr)
    {
        st.push(current);
        cnt++;
        current = current->right;
    }
    while (cnt!=1)
    {
        cout << st.top()->data << " ";
        st.pop();
        cnt--;
    }
}

void printBoundaryorder(Node* head)
{
    printLeftBoundary(head);
    printAllLeaves(head);
    printRightBoundary(head);
}

int main()
{
    Node *root = nullptr;
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 2);
    root = insertNode(root, 4);
    root = insertNode(root, 9);
    root = insertNode(root, 7);
    root = insertNode(root, 8);
    root = insertNode(root, 6);
    root = insertNode(root, 11);
    root = insertNode(root, 10);
    root = insertNode(root, 12);
    cout << "Boundaryorder traversal: ";
    printBoundaryorder(root);
    return 0;
}