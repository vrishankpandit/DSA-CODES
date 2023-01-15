#include<iostream>
using namespace std;

bool isorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isorted(arr+1,size-1);
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<isorted(arr,5);

    return 0;
}