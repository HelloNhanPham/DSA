// Using traversal level order.
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

Node* make_tree()
{
	int n;
	cin>>n;
    
	Node* head=NULL;
	queue <Node*> q;

	for( ; n>0 ; n-=2 )
	{
		int a,b;
		char c;
		cin>> a >> b >> c;

        if(!head)
		{
			head = new Node(a);
			q.push(head);
		}

        Node* pick = q.front();
		q.pop();

		if(c == 'L')
		{
			pick->left = new Node(b);
			q.push( pick->left );
		}
		
		
		cin>> a >> b >> c;
		
		if(c == 'R')
		{
			pick->right = new Node(b);
			q.push( pick->right );
		}
	}
	return head;
}

long int sumBT(Node* root);


int main()
{
    int t;cin>>t;while(t--){
    	
    	Node* head = make_tree();
    
        cout<<sumBT(head)<<endl;
    }
	return 1;
}

long int sumBT(Node* root)
{
    if (root==nullptr)
        return 0;
    queue<Node*> qu;
    qu.push(root);
    long int sum = 0;
    while (!qu.empty())
    {
        Node* temp = qu.front();
        qu.pop();
        sum += temp->key;
        if (temp->left!=nullptr)
            qu.push(temp->left);
        if (temp->right!=nullptr)
            qu.push(temp->right);
    }
    return sum;
}