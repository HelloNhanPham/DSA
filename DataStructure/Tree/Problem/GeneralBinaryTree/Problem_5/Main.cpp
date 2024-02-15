#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;
};

node* newNode(int);
void printVector(vector<int> v);
void printPaths_support(node* root);
void printPaths(node* root);

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v.at(i) << " ";
    cout << endl;
}

void printPaths_support(node* root, vector<int> v)
{
    if (root == nullptr)
        return;
    v.push_back(root->data);
    if (root->left == nullptr && root->right == nullptr)
        printVector(v);
    printPaths_support(root->left, v);
    printPaths_support(root->right, v);
}

void printPaths(node* root)
{
    vector<int> v;
    printPaths_support(root, v);
}

int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printPaths(root);
    return 0;
}