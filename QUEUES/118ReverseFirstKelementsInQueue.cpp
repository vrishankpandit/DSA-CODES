// queue<int> modifyQueue(queue<int> q, int k) {
//     stack<int> s;
//     // queue<int> ans;
    
//     for(int i=0;i<k;i++){
//         int a=q.front();
//         q.pop();
//         s.push(a);
//     }
    
//     while(!s.empty()){
//         int b=s.top();
//         s.pop();
//         q.push(b);
//     }
    
//     int t=q.size()-k;
//     while(t--){
//         int c=q.front();
//         q.pop();
//         q.push(c);
//     }
//     return q;
    