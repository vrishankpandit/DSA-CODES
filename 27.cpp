#include<iostream>
using namespace std;




int pivot(int arr[],int n){

    for(int i=0;i<n;i++){
        int j=i;
        int k=i;
        int suma=0;
        int sumb=0;
        while(j!=0){
             suma=suma+arr[j-1];    
             j--;  
        }
        while(k!=n-1){
            sumb=sumb+arr[k+1];
            k++;
        }
        if(suma==sumb){
            return i;
        }
        
    }
    return -1;
}

//  int right_sum = accumulate(nums.begin(),nums.end(),0); 
// 		//accumulate(first, last, sum) ,i.e sum : initial value of the sum
//         int left_sum = 0;
//         for(int i = 0;i < nums.size();i++){
//             right_sum -= nums[i];
//             if(left_sum == right_sum){
//                 return i;
//             }
//             left_sum += nums[i];
//         }
//         return -1;

int main(){

    int num[7]={1,2,3,4,0,0,6};
    cout<<pivot(num,7)	<<endl;
    return 0;
}