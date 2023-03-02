#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/



void reverse(LinkedListNode<int> *prev,LinkedListNode<int> *curr,LinkedListNode<int> * &head){

    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode<int>* forward=curr->next;
    reverse(curr,forward,head);
    curr->next=prev;
    
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{



        /*
        LinkedListNode<int>* prev=NULL;
        LinkedListNode<int>* curr=head;
        reverse(prev,curr,head);
        return head;
        */        
    
        /*
        LinkedListNode<int>* prev=NULL;
        LinkedListNode<int>* forward=NULL;
        LinkedListNode<int>* curr=head;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        
        return prev;
        */
}