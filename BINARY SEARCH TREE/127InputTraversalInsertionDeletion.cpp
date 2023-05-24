#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *right;
    Node* left;

    Node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};


Node* insertintoBST(Node* root,int d){


    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d>root->data){
        root->right=insertintoBST(root->right,d);
    }
    else{
        root->left=insertintoBST(root->left,d);
    }
    return root;
    
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
    }

}
Node* minVal(Node *root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* deletefromBST(Node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child
        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            // root=temp;
            return temp;
        }
        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            // root=temp;
            return temp;
        }


        //2 child

        if(root->left!=NULL && root->right!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deletefromBST(root->right,mini);
            return root;
        }

    }
    else if(val<root->data){
        root->left=deletefromBST(root->left,val);
        return root;
    }
    else{
        root->right=deletefromBST(root->right,val);
        return root;
    }
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



int main(){

    Node* root=NULL;

    takeinput(root);
    cout<<"printing bst "	<<endl;
    levelordertraversal(root);
    cout<<endl;
    root=deletefromBST(root,18);
    root=deletefromBST(root,87);
    root=deletefromBST(root,45);
    levelordertraversal(root);
    
    return 0;
}