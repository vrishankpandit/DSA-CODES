#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int k){
     int start =0;
     int end=n-1;
     int mid=start +(end-start)/2;
     int a=-1;

     while(start<=end){
           if (k==arr[mid]){
                a=mid;
                end=mid-1;
           }
           else if(k>arr[mid]){
            start=mid+1;
           }
           else{
            end=mid-1;
           }
          
     mid=start +(end-start)/2;
     }
     return a;
}
int lastoccurence(int arr[],int n,int k){
     int start =0;
     int end=n-1;
     int mid=start +(end-start)/2;
     int a=-1;

     while(start<=end){
           if (k==arr[mid]){
                a=mid;
                start=mid+1;
           }
           else if(k>arr[mid]){
            start=mid+1;
           }
           else{
            end=mid-1;
           }
          
     mid=start +(end-start)/2;
     }
     return a;
}

int main(){
    // int n;
    // cout<<"enter the number "	<<endl;
    // cin>> n;
    int num[10]={0,0,0,1,1,2,2,2,2,2};
    
    cout<<firstoccurence(num,10,1)<<endl;
    cout<<lastoccurence(num,10,2)<<endl;
    return 0;
}