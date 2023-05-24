#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
    
};

void insertnode(node* &tail,int element,int d){

    cout<<"inserting "<<d<<endl;
    if(tail==NULL){
        node* temp=new node(d);
        temp->next=temp;
        tail=temp;
    }
    else{
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found and curr is repersenting element vala node
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;

    }


}

void print(node* &tail){
    node* temp=tail;

    if(tail==NULL){
        cout<<"list is empty"	<<endl;
        return;
    }

    do{                                    //do while executes atleast one time the code written in the block
        cout<<tail->data<<" ";
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}

void deletenode(node* &tail,int value){
    cout<<"deleting "<<value	<<endl;

    if(tail==NULL){
        cout<<"list is empty"	<<endl;
        return;
    }
    else{

        node* prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        //1 node ll
        if(curr==prev){
            tail=NULL;
        }
        //>=2 linked lists
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;


    }
}

int main(){

    node* tail=NULL;
    //inserting in empty list

    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,4);
    print(tail);
    insertnode(tail,4,6);
    print(tail);
    insertnode(tail,3,7);
    print(tail);
    deletenode(tail,3);
    print(tail); 
    
    return 0;
}