#include<bits/stdc++.h>
using namespace std;

class node{//declaring the doubly link list in class node
    public:
    int data;
    node* next;
    node* prev;

    node (int val){

        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAthead(node* &head,int val){//insertion in head in doubly linked list
    node* n=new node(val);
    n->next=head;
    if(head != NULL){
        head->prev=n;
    }
    head=n;
    
}

void insertAttail(node* &head,int val){//insertion at tail in doubly inked list 
    node* n=new node(val);
    node* temp=head;
   
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    

    while(temp->next!=NULL){//for displaying the linklist
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}


void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }

void deleteAthead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}


void deletion(node* head,int pos){
    if (pos==1){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;

    }
    temp->prev->next=temp->next;
    if (temp->next !=NULL){
        temp->next->prev=temp->prev;
    }
    delete temp;
}

int main(){

    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    
    insertAthead(head,5);
    display(head);
    deletion(head,3);
    display(head);
   

    return 0;
}