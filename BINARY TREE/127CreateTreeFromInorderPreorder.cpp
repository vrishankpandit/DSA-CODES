#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

void createmapping(unordered_map<int,int> &mapping,int inorder[],int size){
for (int i = 0; i < size; i++)
{
    mapping[inorder[i]]=i;
}

}

int findpos(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element)
            return i;
    }
    // return -1;
}

void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
      Node* temp=q.front();
      q.pop();

      if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
          q.push(NULL);
        }
      }
      else{
        cout<<temp->data<<" ";
        if(temp->left){
          q.push(temp->left);
        }
        if(temp->right){
          q.push(temp->right);
        }
      }
    }
}

Node* buildtreefromInorderandPreorder(int inorder[],int preorder[],int size,int &preindex,int inorderstart,int inorderend){

if(preindex>=size || inorderstart>inorderend){
    return NULL;
}
 //step A
    int element=preorder[preindex++];
    Node* root=new Node(element);
    int position=findpos(inorder,size,element);

    //step b root->left->solve
    root->left=buildtreefromInorderandPreorder(inorder,preorder,size,preindex,inorderstart,position-1);

    //step c root->right solve
    root->right=buildtreefromInorderandPreorder(inorder,preorder,size,preindex,position+1,inorderend);

    return root;

}
Node* buildtreefromInorderandPostorder(int inorder[],int postorder[],int size,int &postindex,int inorderstart,int inorderend,unordered_map<int,int> &mapping){

if(postindex<0 || inorderstart>inorderend){
    return NULL;
}
 //step A
    int element=postorder[postindex];
    postindex--;
    Node* root=new Node(element);
    // int position=findpos(inorder,size,element);
    int position=mapping[element];

    //step c root->right solve
    root->right=buildtreefromInorderandPostorder(inorder,postorder,size,postindex,position+1,inorderend,mapping);

    //step b root->left->solve
    root->left=buildtreefromInorderandPostorder(inorder,postorder,size,postindex,inorderstart,position-1,mapping);

    return root;

}

int main(){
    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int postorder[]={40,50,20,60,70,30,10};
    int size=7;
    int preindex=0;
    int postindex=size-1;
    int inorderstart=0;
    int inorderend=size-1;

    unordered_map<int,int> mapping;
    createmapping(mapping,inorder,size);

    // Node* root=buildtreefromInorderandPreorder(inorder,preorder,size,preindex,inorderstart,inorderend);
    Node* root=buildtreefromInorderandPostorder(inorder,postorder,size,postindex,inorderstart,inorderend,mapping);
    levelordertraversal(root);
    return 0;
}