#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <queue>
using namespace std;

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

Node* buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N') return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);
    Node* root = newNode(stoi(ip[0]));
    queue<Node*> queue;
    queue.push(root);
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if (currVal != "N") {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];
        if (currVal != "N") {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

int sumOfTwoChild(Node* root)
{
    int sum = 0;
    if (root->left != nullptr)
        sum += root->left->data;
    if (root->right != nullptr)
        sum += root->right->data;
    return sum;
}

class Solution {
public:
    int isSumProperty(Node* root)
    {
        if (root == nullptr)
            return 1;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        if (sumOfTwoChild(root) != root->data)
            return 0;
        if (isSumProperty(root->left) == 1 && isSumProperty(root->right) == 1)
            return 1;
        return 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isSumProperty(root) << endl;
    }
    return 0;
}