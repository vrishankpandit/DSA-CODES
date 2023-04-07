// class Solution
// {
//     private:
//     Node* reverse(Node* head){
//         Node* prev=NULL;
//         Node* curr=head;
//         Node* next=NULL;
        
//         while(curr!=NULL){
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
        
//     }
    
//     void insertattail(struct Node* &head, struct Node* &tail,int val){
        
//         Node* temp=new Node(val);
//         if(head==NULL){
//             head=temp;
//             tail=temp;
//             return;
//         }
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
        
//     }
    
//     struct Node* add(struct Node* first, struct Node* second){
        
//         int carry=0;
//         Node* anshead=NULL;
//         Node* anstail=NULL;
        
        
        
//         while(first!=NULL || second!=NULL || carry!=0){
        
//         int val1=0;
//         if(first!=NULL){
//             val1=first->data;
//         }
//         int val2=0;
//         if(second!=NULL){
//             val2=second->data;
//         }
        
//         int sum=carry+val1+val2;
//         int digit=sum%10;
//         insertattail(anshead,anstail,digit);
//         carry=sum/10;
        
//         if(first!=NULL)
//             first=first->next;
            
//         if(second!=NULL)
//             second=second->next;
            
//         }
        
//         return anshead;
//     }
    
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         first=reverse(first);
//         second=reverse(second);
        
//         Node* ans=add(first,second);
        
//         ans=reverse(ans);
        
//         return ans;
        
//     }
// };