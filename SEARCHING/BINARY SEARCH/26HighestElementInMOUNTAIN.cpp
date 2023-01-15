#include<iostream>
using namespace std;
int high(int arr[],int n){
     int start =0;
     int end=n-1;
     int mid=start +(end-start)/2;
     while(start<end){
           if(arr[mid]<arr[mid+1]){
            start=mid+1;
           }
           else{
            end=mid;
           }
           mid=start +(end-start)/2;
     }
return arr[mid];
}
int main(){
    int num[5]={1,4,6,7,4};
    cout<<"highest element is "<<high(num,5)	<<endl;
    return 0;
}