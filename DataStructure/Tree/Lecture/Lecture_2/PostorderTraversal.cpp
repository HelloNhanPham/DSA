#include <iostream>
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

void printPostorder(Node* head)
{
    if (head!=nullptr)
    {
        printPostorder(head->left);
        printPostorder(head->right);
        cout << head->data << " ";
    }
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
    cout << "Postorder traversal: ";
    printPostorder(root);
    return 0;
}