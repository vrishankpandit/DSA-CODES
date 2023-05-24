#include<iostream>
using namespace std;

void findmissing(int *arr,int n){
    //visited
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }

    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //all positive indexes are missing
    cout<<"misiing are"	<<endl;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
        /* code */
    }
    
}

int main(){
    int n;
    int arr[]={1,3,4,3,5};
    n=sizeof(arr)/sizeof(int);
    findmissing(arr,n);
    return 0;
}