#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

int countNodesinLoop(struct Node *head)
{
    Node *fast = head, *slow = head, *start_of_loop = nullptr;
    while (fast!=nullptr && fast->next!=nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            start_of_loop = fast;
            break;
        }
    }
    if (start_of_loop == nullptr)
        return 0;
    fast = slow = start_of_loop;
    int count = 0;
    while (true)
    {
        slow = slow->next;
        fast = fast->next->next;
        count++;
        if (slow==fast)
            return count;
    }
    return 0;
}