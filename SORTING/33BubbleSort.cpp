#include<iostream>
using namespace std;

void print(int *arr,int n){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void bubblesort(int arr[],int size){
    for(int i=0;i<size;i++){
        
        for(int j=0;j<size-1;j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        print(arr,5);
        cout<<endl;
    }
}

int main(){
    
    int arr[5]={10,1,11,7,6};
    bubblesort(arr,5);
    
    return 0;
}