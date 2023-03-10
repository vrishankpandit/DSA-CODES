// #include <bits/stdc++.h> 
// /****************************************************************
//     Following is the class structure of the Node class:
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

// Node *removeDuplicates(Node *head)
// {
//   map<int,bool> visited;
//   Node* curr=head;
//   visited[curr->data]=true;
//   while(curr->next!=NULL && curr!=NULL){
//   if(visited[curr->next->data]==true){
    
//     Node* temp=curr->next;
//       delete (curr->next);
//       curr->next=temp->next;
    
//   }
//   else{
//       visited[curr->next->data]=true;
//       curr=curr->next;
//   }
//   }
//   return head;
// }
// 6/9 CASES PASSED,TLE ERROR