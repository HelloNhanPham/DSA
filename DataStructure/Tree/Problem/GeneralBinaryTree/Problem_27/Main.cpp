// Using traversal level order.

#include <iostream>
#include <queue>
#include <sstream>
#include <vector>

using namespace std;
#define MAX_HEIGHT 100000

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

Node* buildTree(string str)
{
    if(str.length() == 0 || str[0] == 'N')
        return NULL;
    vector<string> ip;
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
    Node* root = newNode(stoi(ip[0]));
    queue<Node*> queue;
    queue.push(root);
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if(currVal != "N") {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
        if(currVal != "N") {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

class Solution{
  public:
    int getLevelDiff(Node *root)
    {
        if (root==nullptr)
            return 0;
        queue<Node*> Q;
        Q.push(root);
        int sumOdd = 0, sumEven = 0, currentLevel = 1;
        while (!Q.empty())
        {
            int size = Q.size(), currentSum = 0;
            for (int i = size; i != 0; --i)
            {
                Node* current = Q.front();
                Q.pop();
                currentSum += current->data;
                if (current->left!=nullptr)
                    Q.push(current->left);
                if (current->right!=nullptr)
                    Q.push(current->right);
            }
            currentLevel%2==0 ? sumEven+=currentSum : sumOdd+=currentSum;
            currentLevel++;
        }
        return sumOdd - sumEven;
    }
};

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution obj;
        cout<<obj.getLevelDiff(root);
        cout << endl;
    }
    return 0;
}