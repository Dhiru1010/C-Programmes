#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};
    void showlist(node* &head){
        node* temp=head;
        while(temp->next!=0){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void insertionTail(node* &head,int val){
        node* n=new node(val);
        if (head->next==NULL){
            head=n;
            return;
        }
        else{
            node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;

            }
        temp->next=n;
        }
    }

int main(){
    node* head=NULL;
    insertionTail(head,1);
    insertionTail(head,2);
    insertionTail(head,3);
    insertionTail(head,4);
    showlist(head);


    return 0;
}