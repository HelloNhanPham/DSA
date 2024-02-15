// Using iterator and queue
#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
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

int countLeaves(Node* root)
{
    if (root==nullptr)
        return 0;
    queue<Node*> qu;
    qu.push(root);
    int count = 0;
    while (!qu.empty())
    {
        int cnt = 0;
        if (qu.front()->left!=nullptr)
        {
            qu.push(qu.front()->left);
            cnt++;
        }
        if (qu.front()->right!=nullptr)
        {
            qu.push(qu.front()->right);
            cnt++;
        }
        if (cnt==0)
            count++;
        qu.pop();
    }
    return count;
}

int main()
{
    int t;
	cin >> t;
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		cout<< countLeaves(root)<<endl;
    }
    return 0;
}