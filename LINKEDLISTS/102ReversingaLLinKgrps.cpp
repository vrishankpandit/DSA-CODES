// #include <bits/stdc++.h> 
// /****************************************************************
//     Following is the Linked List node structure

//     class Node
//     {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/


// Node* kReverse(Node* head, int k) {

//     if(head==NULL){
//         return NULL;
//     }
//     Node* curr=head;
//     Node* prev=NULL;
//     Node* next=NULL;
//     int count=0;
//     //step1 reversing first k nodes
//     while(curr!=NULL && count<k){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//         count++;
//     }

//     //step2 aage ka recursion sambhal lega
//     if(next!=NULL){
//         head->next=kReverse(next,k);
//     }

//     //step3 retrun head of reversed list
//     return prev;

// }