#include<iostream>
using namespace std;

class node{

public:
int data;
node* prev;
node* next;

node(int d){
    // cout<<"entered"	<<endl;
    this->data=d;
    // cout<<this->data	<<endl;
    this->prev=NULL;
    this->next=NULL;
}

};

int getlength(node* &head){
    int len=0;
    node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data	<<endl;
        temp=temp->next;
    }

    return len;
}

void print(node* &head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

void insertathead(node* &head,int d){

    node* temp=new node(d);

    temp->next=head;
    head->prev=temp;
    head=temp;

}


int main(){

    node* node1=new node(10);
    node* head=node1;
    print(head);
    insertathead(head,3);
    print(head);
    
    return 0;
}