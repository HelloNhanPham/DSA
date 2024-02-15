// Using level order traversal
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N') return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);
    Node *root = new Node(stoi(ip[0]));
    queue<Node *> queue;
    queue.push(root);
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node *currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if (currVal != "N") {
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];
        if (currVal != "N") {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

void inOrder(struct Node *node) {
    if (node == NULL) return;
    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
}

class Solution {
  public:
    void mirror(Node* node) {
        if (node == nullptr)
            return;
        queue<Node*> qu;
        qu.push(node);
        while (!qu.empty())
        {
            if (qu.front()->left!=nullptr)
                qu.push(qu.front()->left);
            if (qu.front()->right!=nullptr)
                qu.push(qu.front()->right);
            Node* temp = qu.front()->left;
            qu.front()->left = qu.front()->right;
            qu.front()->right = temp;
            qu.pop();
        }
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        getline(cin, str);
        Node *root = buildTree(str);
        Solution ob;
        ob.mirror(root);
        inOrder(root);
        cout << "\n";
    }

    return 0;
}