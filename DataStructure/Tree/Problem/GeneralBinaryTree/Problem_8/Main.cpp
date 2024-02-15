#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
    public:
    bool isIdentical(Node *r1, Node *r2)
    {
        if (r1==nullptr && r2==nullptr)
            return true;
        if (r1==nullptr || r2==nullptr)
            return false;
        if (r1->data != r2->data)
            return false;
        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
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

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str, str1;
        getline(cin, str);
        Node *rootA = buildTree(str);
        getline(cin, str1);
        Node *rootB = buildTree(str1);
        Solution ob;
        if (ob.isIdentical(rootA, rootB)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}