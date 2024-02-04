#include <iostream>
#include <vector>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *current = head;
        while (current->next->next != nullptr)
            current = current->next;
        current->next->next = head;
        head = current->next;
        current->next = nullptr;
        return head;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ListNode*> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=new ListNode(x);
            if(i!=0){
                a[i-1]->next=a[i];
            }
        }
        ListNode *head=a[0];
        Solution ob;
        head=ob.moveToFront(head);
        while(head!=NULL){
            cout<<head->val;
            if(head->next!=NULL){
                cout<<" ";
            }
            head=head->next;
        }
        cout<<endl;
    }
    return 0;
}