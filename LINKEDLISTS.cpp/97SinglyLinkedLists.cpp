#include<iostream>
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

    cout<<"head is"<<head->data	<<endl;
    cout<<"tail is"<<tail->data	<<endl;

    return 0;
}