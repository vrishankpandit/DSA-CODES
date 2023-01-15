#include<iostream>
using namespace std;

 int peakElement(int arr[], int n)
    {
       int i=0;
       if(arr[i]>arr[i+1]){
           return 1;
       }
       while(i<n){
           if(arr[i]<arr[i+1] && arr[i-1]<arr[i] ){
               
               return 1;               
           }
           i++;
       }
    }
    
int main(){

    int arr[4]={1,2,3,4};
    cout<<peakElement(arr,4);
    
    
    return 0;
}