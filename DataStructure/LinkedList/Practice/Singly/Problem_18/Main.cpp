#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}

void pushBack(Node *&head, Node *&tail, int data)
{
    if (head==nullptr)
    {
        head = tail = new Node(data);
        return;
    }
    tail->next = new Node(data);
    tail = tail->next;
}

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node *mergeHead = nullptr, *mergeTail = nullptr, *current1 = head1, *current2 = head2;
        while (current1!=nullptr && current2!=nullptr)
        {
            if (current1->data < current2->data)
                current1 = current1->next;
            else if (current1->data > current2->data)
                current2 = current2->next;
            else
            {
                pushBack(mergeHead, mergeTail, current1->data);
                current1 = current1->next;
                current2 = current2->next;
            }
        }
        return mergeHead;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}