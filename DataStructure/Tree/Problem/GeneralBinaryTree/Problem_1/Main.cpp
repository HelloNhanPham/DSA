#include <iostream>
using namespace std;

class node 
{ 
    public:
    int data; 
    node* left; 
    node* right; 
};

node* newNode(int data) 
{ 
    node* Node = new node();
    Node->data = data; 
    Node->left = NULL; 
    Node->right = NULL; 
         
    return(Node); 
} 

int size(node *root)
{
    if (root == nullptr)
        return 0;
    return size(root->left) + 1 + size(root->right);
}

int main()
{
  node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
     
    cout << "Size of the tree is " << size(root); 
    return 0;  
}