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


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}

Node *removeDuplicates(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    Node *first = head, *second = head->next;
    while (second!=nullptr)
    {
        if (first->data == second->data)
        {
            Node* temp = second;
            first->next = second = temp->next;
            delete temp;
        }
        else
        {
            first = first->next;
            second = second->next;
        }
    }
    return head;
}