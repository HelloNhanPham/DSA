#include <iostream>
#include <unordered_set>
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

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node *removeDuplicates(Node *head) 
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        unordered_set<int> temp;
        Node *first = head, *second = head->next;
        temp.insert(head->data);
        while (second!=nullptr)
        {
            if (temp.count(second->data)==0)
            {
                temp.insert(second->data);
                first = first->next;
                second = second->next;
            }
            else 
            {
                Node* temp = second;
                first->next = second->next;
                second = second->next;
                delete temp;
            }
        }
        return head;
    }
};

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
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
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}