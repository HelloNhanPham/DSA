// Using traversal level order.

#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

Node *buildTree(string str)
{
    if (str.length() == 0 || str[0] == 'N')
        return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);
    Node *root = new Node(stoi(ip[0]));
    queue<Node *> queue;
    queue.push(root);
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {
        Node *currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if (currVal != "N")
        {
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];
        if (currVal != "N")
        {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution
{
public:
    int findMax(Node *root)
    {
        if (root==nullptr)
            return 0;
        int max_so_far = INT16_MIN;
        queue<Node*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            Node* current = Q.front();
            Q.pop();
            max_so_far = max(max_so_far, current->data);
            if (current->left!=nullptr)
                Q.push(current->left);
            if (current->right!=nullptr)
                Q.push(current->right);
        }
        return max_so_far;
    }
    int findMin(Node *root)
    {
        if (root==nullptr)
            return 0;
        int min_so_far = INT16_MAX;
        queue<Node*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            Node* current = Q.front();
            Q.pop();
            min_so_far = min(min_so_far, current->data);
            if (current->left!=nullptr)
                Q.push(current->left);
            if (current->right!=nullptr)
                Q.push(current->right);
        }
        return min_so_far;
    }
};

int main()
{
    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int mx = obj.findMax(root);
        int mn = obj.findMin(root);
        cout << mx << " " << mn << "\n";
    }
    return 0;
}