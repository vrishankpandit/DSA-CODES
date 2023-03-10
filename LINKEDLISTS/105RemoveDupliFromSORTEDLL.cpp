// /************************************************************

//     Following is the linked list node structure.
    
//     class Node 
//     {
//         public:
//         int data;
//         Node* next;

//         Node(int data) 
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };
    
// ************************************************************/

// Node * uniqueSortedList(Node * head) {
//     Node* curr=head;
//     while(curr!=NULL && curr->next!=NULL){
//         if(curr->next->data==curr->data){
//             delete (curr->next);
//             curr->next=curr->next->next;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
//     return head;
// }