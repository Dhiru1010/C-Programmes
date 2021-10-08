/*create the linked list and add in tail head 
and reverse a linked list with two methods
*/

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
   void hea(node* &head,int val){
      node* n= new node(val);
      n->next=head;
      head=n;
    }


    void Tail(node* &head,int val){
        node* n=new node(val);
        if (head==NULL){
            head=n;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

      void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }


    bool search(node* head,int key){
        node* temp=head;
        while(temp!=NULL){
            if (temp->data==key){
                return true;
            }
            
            temp=temp->next;
        }
        return false;
    }
    node* rev(node* &head){
        node* preptr=NULL;
        node* curptr=head;
        node* nextptr;
        while(curptr!=NULL){
            nextptr=curptr->next;
            curptr->next=preptr;

            preptr=curptr;
            curptr=nextptr;
        }
        return preptr;
    }

    node* rev2(node* &head){
        if(head==NULL || head->next==NULL){
            return head;
        }
      
        node* newnode=rev2(head->next);
       
        head->next->next=head;
        
        head->next=NULL;
        
        return newnode;
    }

int main(){
    node* head=NULL;
    
    Tail(head,1);
    Tail(head,2);
    Tail(head,3);
    Tail(head,4);
    hea(head,5);
    display(head);
    node* newhead=rev2(head);
    display(newhead);

    return 0;
}