// Using traversal level order
#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
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
    while (!queue.empty() && i < ip.size()) {
        Node *currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if (currVal != "N") {
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];
        if (currVal != "N") {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if (root==nullptr)
            return 0;
        queue<Node*> qu;
        qu.push(root);
        int cnt = 0;
        while (!qu.empty())
        {
            Node* temp = qu.front();
            qu.pop();
            if (temp->left!=nullptr || temp->right!=nullptr)
            {
                cnt++;
                if (temp->left!=nullptr)
                    qu.push(temp->left);
                if (temp->right!=nullptr)
                    qu.push(temp->right);
            }
        }
        return cnt;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        cout << ob.countNonLeafNodes(root) << "\n";
    }
    return 0;
}