// int ispossible(vector<int> &stalls, int k,int mid){
//     int cowcount=1;
//     int lastpos=stalls[0];
//     for(int i=0;i<stalls.size();i++){
//         if(stalls[i]-lastpos>=mid){
//             cowcount++;
//             if(cowcount==k){
//                 return true;
//             }
//             lastpos=stalls[i];
//         }
         
//     }
//     return false;
// }



// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(),stalls.end());
//     int s=0;
//     int maxi=-1;
//     for(int i=0;i<stalls.size();i++){
//         maxi=max(maxi,stalls[i]);
//     }
//     int end=maxi;
//     int mid=s+(end-s)/2;
//     int ans=-1;
    
//     while(s<=end){
        
//         if(ispossible(stalls,k,mid)){
//            ans=mid;
//            s=mid+1; 
//            }
//            else{
//                end=mid-1;
//            }
           
//            mid=s+(end-s)/2;
           
//     }
//            return ans;
//            }