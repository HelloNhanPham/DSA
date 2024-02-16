#include <iostream>
#include <queue>
#include <vector>
#include <sstream>
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
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


class Solution
{
public:
    int depthOfOddLeaf(Node *root)
    {
        if (root==nullptr)
            return 0;
        int result = 0, current_level = 0;
        queue<Node*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            int size = Q.size();
            current_level++;
            bool flag = false;
            for (int i = 0; i < size; ++i)
            {
                Node * current = Q.front();
                Q.pop();
                if (current->left!=nullptr)
                    Q.push(current->left);
                if (current->right!=nullptr)
                    Q.push(current->right);
                if (current->right==nullptr && current->left==nullptr)
                    flag = true;
            }
            if (current_level%2==1 && flag==true)
                result = current_level;
        }
        return result;
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
        int res = obj.depthOfOddLeaf(root);
        cout << res << "\n";
    }
    return 0;
}