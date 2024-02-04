#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void pushBack(Node *&head, Node *&tail, Node *newnode)
{
    if (head == nullptr)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *support_head = nullptr, *support_tail = nullptr;
        for (int i = 0; i < k; ++i)
        {
            Node* temp = head;
            head = head->next;
            temp->next = nullptr;
            pushBack(support_head, support_tail, temp);
        }
        if (head == nullptr)
            return support_head;
        Node* current = head;
        while (current->next!=nullptr)
            current = current->next;
        current->next = support_head;
        return head;
    }
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}