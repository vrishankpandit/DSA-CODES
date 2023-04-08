//  private:
    
//     void insertattail(Node* &head,Node* &tail,int val){
//         Node* temp=new Node(val);
//         if(temp==NULL){
//             head=temp;
//             tail=temp;
//             return;
//         }
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//     }
    
//     public:
//     Node *copyList(Node *head)
//     {
//         //step 1 creating a clone list
//         Node* clonehead=NULL;
//         Node* clonetail=NULL;
        
//         Node* temp=head;
//         while(temp!=NULL){
//             insertattail(clonehead,clonetail,temp->data);
//             temp=temp->next;
//         }
        
//         //step 2 creating a mapping
        
//         unordered_map<Node*,Node*> oldtonewnode;
//         Node* originalnode=head;
//         Node* clonenode=clonehead;
        
//         while(originalnode!=NULL && clonenode!=NULL){
//             oldtonewnode[originalnode]=clonenode;
//             originalnode=originalnode->next;
//             clonenode=clonenode->next;
            
//         }
        
//         originalnode=head;
//         clonenode=clonehead;
        
//         while(originalnode!=NULL){
//             clonenode->arb=oldtonewnode[originalnode->arb];
//             clonenode=clonenode->next;
//             originalnode=originalnode->next;
//         }
        
//         return clonehead;
        
//     }