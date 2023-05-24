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
    cout<<"inserting "<<d<<" at head "<<endl;
    node* temp=new node(d);
    temp->next=head;   //next here stores the next node address //and head is the first node 
    head=temp;
}

void insertattail(node* &tail,int d){
    node* temp=new node(d);
    cout<<"inserting at end "<<d<<endl;
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
    cout<<"inserting " <<d << " affter "<<temp->data<<endl;
    temp->next=nodetoinsert;




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
        cout<<"deleting "<<curr->data	<<endl;
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

    cout<<"head is "<<head->data	<<endl;
    cout<<"tail is "<<tail->data	<<endl;

    deletenode(3,head);
    cout<<endl;
    print(head);

    return 0;
}