#include <iostream>
#include <sstream>
#include <queue>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
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

class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        if (root==nullptr)
            return 0;
        queue<Node*> qu;
        qu.push(root);
        int currentLevel = 1, cntCurrentLevel = 1, cntAfterLevel = 0;
        while (!qu.empty())
        {
            if (cntCurrentLevel!=0)
            {
                Node* temp = qu.front();
                qu.pop();
                if (temp->left==nullptr && temp->right==nullptr)
                    return currentLevel;
                if (temp->left!=nullptr)
                {
                    cntAfterLevel++;
                    qu.push(temp->left);
                }
                if (temp->right!=nullptr)
                {
                    cntAfterLevel++;
                    qu.push(temp->right);
                }
                cntCurrentLevel--;
            }
            else
            {
                currentLevel++;
                cntCurrentLevel = cntAfterLevel;
                cntAfterLevel = 0;
            }
        }
        return 1;
    }
};

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s, ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution obj;
        cout << obj.minDepth(root) << endl;
    }
    return 0;
}