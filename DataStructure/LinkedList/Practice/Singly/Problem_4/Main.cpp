#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int getNthFromLast(struct Node* head, int n);

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        Node *first = head, *second = head;
        int distance = 0;
        while (second != nullptr)
        {
            if (distance == n)
                first = first->next;
            else
                distance++;
            second = second->next;
        }
        if (distance == n)
            return first->data;
        return -1;
    }
};

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}