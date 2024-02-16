#include <iostream>
#include <sstream>
#include <queue>
#include <vector>

using namespace std;

// Tree Node
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

void inOrder(Node *root) {
    if (!root) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

class Solution{
  public:
    int maxLevelSum(Node* root) {
        if (root==nullptr)
            return 0;
        int resMax = INT16_MIN;
        queue<Node*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            int size = Q.size();
            int currentLevelSum = 0;
            for (int i = size; i != 0; --i)
            {
                Node* currentNode = Q.front();
                Q.pop();
                currentLevelSum += currentNode->data;
                if (currentNode->left!=nullptr)
                    Q.push(currentNode->left);
                if (currentNode->right!=nullptr)
                    Q.push(currentNode->right);
            }
            resMax = max(resMax, currentLevelSum);
        }
        return resMax;
    }
};

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution obj;
        Node *root = buildTree(treeString);
        cout << obj.maxLevelSum(root) << "\n";
    }
    return 0;
}