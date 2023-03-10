// /********************************
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

// ********************************/
// void insertattail(Node* &tail,Node* curr){
//     tail->next=curr;
//     tail=curr;
// }
// Node* sortList(Node *head)
// {
//     Node* zerohead=new Node(-1);
//     Node* zerotail=zerohead;
//     Node* onehead=new Node(-1);
//     Node* onetail=onehead;
//     Node* twohead=new Node(-1);
//     Node* twotail=twohead;

//     Node* curr=head;

//     while(curr!=NULL){
//         if(curr->data==0){
//             insertattail(zerotail,curr);
//         }
//         else if(curr->data==1){
//             insertattail(onetail,curr);
//         }
//         else if(curr->data==2){
//             insertattail(twotail,curr);
//         }
//         curr=curr->next;
//     }

//     head=zerohead->next;
//     if(zerohead->next==NULL){
//         head=onehead->next;
//     }
//     if(onehead->next==NULL){
//         zerotail->next=twohead->next;
//     }
//     else{
//         zerotail->next=onehead->next;
//     }
    
//         onetail->next=twohead->next;
//         twotail->next=NULL;

//     return head;


// }
