#include <iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

int countNode(Node* head, int count = 0)
{
    if (head == nullptr)
        return count;
    return countNode(head->next, count + 1);
}

Node* insertAtIndex(Node* head, int x, int index)
{
    if (index == 0)
    {
        head = new Node(x);
        return head;
    }
    Node* current = head;
    for (int i = 0; i < index - 1; ++i)
        current = current->next;
    Node* newnode = new Node(x);
    newnode->next = current->next;
    current->next = newnode;
    return head;
}

Node* insertInMiddle(Node* head, int x)
{
    int numNode = countNode(head);
    int index = (numNode%2==0) ? numNode/2 : numNode/2 + 1;
    return insertAtIndex(head, x, index);
}