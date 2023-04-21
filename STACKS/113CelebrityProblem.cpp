// class Solution 
// {
//     private:
//     bool knows(vector<vector<int> >& M, int a,int b){
//         if(M[a][b]==1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         stack<int> s;
        
//         for(int i=0;i<n;i++){
//             s.push(i);
//         }
        
//         while(s.size()>1){
//             int a=s.top();
//             s.pop();
//             int b=s.top();
//             s.pop();
//             if(knows(M,a,b)){
//                 s.push(b);
//             }
//             else{
//                 s.push(a);
//             }
//         }
//         int candidate=s.top();
//             // bool rowcheck=false;
//             int zerocount=0;
//         for(int i=0;i<n;i++){
            
//             if(M[candidate][i]==0){
//                 zerocount++;
//             }
            
//         }
//             if(zerocount!=n){
//                 return -1;
//         }
//             // bool colcheck=false;
//             int onecount=0;
//         for(int i=0;i<n;i++){
            
//             if(M[i][candidate]==1){
//                 onecount++;
//             }
            
//         }
//         if(onecount!=n-1){
//             return -1;
//         }
//         return candidate;
//     }
// };