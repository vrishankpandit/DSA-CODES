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

~node(){
    int val=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory free for node with data"<<val<<endl;
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

void insertathead(node* &head,node* &tail,int d){

    if(head==NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
        node* temp=new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }    

}

void insertattail(node* &tail,node* &head,int d){

    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
        head=temp;

    }
    else{
        node* temp=new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertatpos(node* &tail,node* &head,int position,int d){
    node* temp=head;
    int cnt=1;
    //insert at start
    if(position==1){
        insertathead(head,tail,d);
        return;
    }

    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }

    if(temp->next==NULL){
        insertattail(tail,head,d);
        return;
    }

    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;


}

//deleteing a node at a position
void deletenode(int position ,node* &head){

    //deleting starting node
    if (position==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        //memory free
        delete temp;


    }
    //deleting middle or last node
    else{

        node* curr=head;
        node* previo=NULL;

        int cnt=1;
        while(cnt<position){
            cnt++;
            previo=curr;
            curr=curr->next;
        }
        previo->next=curr->next;
        curr->prev=NULL;
        curr->next=NULL; 
         //memory free
        delete curr;

    }

}



int main(){

    node* node1=new node(10);


    // node* head=NULL;
    // node* tail=NULL;
    
    node* head=node1;
    node* tail=node1;
    print(head);
    insertathead(head,tail,3);
    print(head);
    insertathead(head,tail,11);
    print(head);
    insertattail(tail,head,20);
    print(head);
    insertatpos(tail,head,3,45);
    print(head);
    deletenode(1,head);
    print(head);
    return 0;
}