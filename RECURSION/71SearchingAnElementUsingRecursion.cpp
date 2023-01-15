#include<iostream>
using namespace std;

    bool search(int *arr,int size,int key){
        if(size==0 ){
            return false;
        }
        if(arr[0]==key){
            return true;
        }
        else{
            bool ans=search(arr+1,size-1,key);
            return ans;
        }
    }

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<search(arr,5,2)	<<endl;
    return 0;
}