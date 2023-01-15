#include<iostream>
using namespace std;

void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarysearch(int *arr,int start,int end,int key){

    print(arr,start,end);
    //base case
    if(start>end){
        return false;
    }

    int mid=start+(end-start)/2;
    cout<<"value of arr mid is "<<arr[mid]	<<endl;
    cout<<endl;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarysearch(arr,mid+1,end,key);
    }

    if(arr[mid]>key){
        return binarysearch(arr,start,mid-1,key);
    }


}


int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"present or not "<<binarysearch(arr,0,5,2)	<<endl;
    return 0;
}