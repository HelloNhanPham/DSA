#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;
#define MAX_HEIGHT 100000

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
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

bool isSymmetric_support(Node *node1, Node *node2, bool default_res = true)
{
    if (!default_res)
        return false;
    if (node1 == nullptr && node2 == nullptr)
        return true;
    if (node1==nullptr || node2==nullptr)
        return false;
    if (node1->data != node2->data)
        default_res = false;
    return isSymmetric_support(node1->left, node2->right, default_res) && isSymmetric_support(node1->right, node2->left, default_res);
}

class Solution{
    public:
    bool isSymmetric(struct Node* root)
    {
        if (root == nullptr)
            return true;
	    return isSymmetric_support(root->left, root->right);   
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, ch;
        getline(cin, s);
        Node* root = buildTree(s);
        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"True"<<endl;
        }
        else{ 
            cout<<"False"<<endl;
        }
    }
    return 0;
}