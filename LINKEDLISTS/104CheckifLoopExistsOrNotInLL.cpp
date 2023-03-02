#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;

//constructor
     node(int data){
        this->data=data;
        this->next=NULL;
     }
     //destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value	<<endl;
    }
};


void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;   //next here stores the next node address //and head is the first node 
    head=temp;
}

void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;


}

void insertatpos(node* &tail,node* &head,int position,int d){
    node* temp=head;
    int cnt=1;
    //insert at start
    if(position==1){
        insertathead(head,d);
        return;
    }

    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }

    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;




}


bool detectloop(node * head){

if(head==NULL){
    return false;
}

map<node*,bool> visited;

node* temp=head;

while(temp!=NULL){

    if(visited[temp]==true){
        cout<<"loop present at "<<temp->data<<endl;
        return 1;
    }

    visited[temp]=true;
    temp=temp->next;
}
}

node * floyddetectloop(node* head){
    if(head==NULL){
        return NULL;
    }

    node* fast=head;
    node* slow=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            cout<<"cycle is present at "<<slow->data	<<endl;
            return slow;
        }
        
    }
    return NULL;

}

node* getstartingnode(node* head){//getting the loop starting point be floyd detect loop

    node* intersection=floyddetectloop(head);
    node* slow=head;
    if(head==NULL){
        return NULL;
    }

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}


void removeloop(node* head){
    if(head==NULL){
        return;
    }

    node* startofloop=getstartingnode(head);
    node* temp=startofloop;
    while(temp->next!=startofloop){
       temp=temp->next;
    }
    temp->next=NULL;
    return;

}
//deleteing a node at a position
void deletenode(int position ,node* &head){

    //deleting starting node
    if (position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        //memory free
        delete temp;


    }
    //deleting middle or last node
    else{

        node* curr=head;
        node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            cnt++;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
         //memory free
        delete curr;

    }

}

//traversing through a linkedlist

void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl; 
}


int main(){
        
    node* node1=new node(10);

    // cout<<node1->data	<<endl;
    // cout<<node1->next	<<endl; //prints garabge valye

    node* head=node1;
    node* tail=node1;

    print(head);
    // insertathead(head,12);
    // print(head);

    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);

    insertatpos(tail,head,3,22);
    print(head);
    insertatpos(tail,head,1,32);
    print(head);
    insertatpos(tail,head,6,60);
    print(head);

    tail->next=head->next;
    cout<<"head is "<<head->data	<<endl;
    cout<<"tail is "<<tail->data	<<endl;

    cout<<detectloop(tail)<<endl;

    if(floyddetectloop(tail)!=NULL){
        cout<<"cycle is present "	<<endl;
    }
    else{
        cout<<"cycle is not prestn"	<<endl;
    }

    node* loopstart=getstartingnode(head);
    cout<<"loops starts at"<<loopstart->data;
    cout<<endl;

    removeloop(head);
    print(head);
    

    return 0;
}