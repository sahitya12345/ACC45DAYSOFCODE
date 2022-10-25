#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertHead(node* &head, int val)
{
    node*n =new node(val);
    n->next=head;
    head=n;

}

void insertTail(node* &head, int val)
{
    node*n =new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head, int key){
    node* temp =head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }  
        temp=temp->next;
    }
    return false;
}

int main()
{
    node* head=NULL;
    insertTail(head,10);
    insertTail(head,20);
    insertTail(head,30);
    printlist(head);
    insertHead(head,40);
    printlist(head);
    cout<<search(head,10);
return 0;
}