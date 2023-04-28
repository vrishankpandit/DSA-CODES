// class Solution
// {
//     public:
    
//     pair<bool,int> sumtree(Node* root){
//         if(root==NULL){
//             pair<bool,int> a=make_pair(true,0);
//             return a;
//         }
        
//         if(root->left==NULL && root->right==NULL){
//             pair<bool,int> p=make_pair(true,root->data);
//             return p;
//         }
        
//         pair<bool,int> left=sumtree(root->left);
//         pair<bool,int> right=sumtree(root->right);
        
//         int leftsum=left.second;
//         int rightsum=right.second;
        
//         pair<bool,int> ans;
//         int sum=leftsum+rightsum;
        
//         if(sum==root->data && left.first && right.first){
//             ans.first=true;
//             ans.second=2*sum;
//         }
//         else{
//             ans.first=false;
//         }
//         return ans;
//     }
    
//     bool isSumTree(Node* root)
//     {
//          return sumtree(root).first;
//     }
// };