// vector<long long> printFirstNegativeInteger(long long int a[],long long int N, long long int k) {
                                                 
//       deque<long long int> dq;
//       vector<long long> ans;
      
//       for(int i=0;i<k;i++){
//           if(a[i]<0){
//               dq.push_back(i);
//           }
//       }
//       if(dq.size()>0){
//           ans.push_back(a[dq.front()]);
//       }
//       else{
//           ans.push_back(0);
//       }
      
//       for(int i=k;i<N;i++){
//           if(!dq.empty() && i-dq.front()>=k){
//               dq.pop_front();
//           }
//           if(a[i]<0){
//               dq.push_back(i);
//           }
//           if(dq.size()>0){
//               ans.push_back(a[dq.front()]);
//           }
//           else{
//               ans.push_back(0);
//           }
//       }
//       return ans;
      
//  }