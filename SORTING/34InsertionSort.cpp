#include<iostream>
using namespace std;

void print(int *arr,int n){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]	<<" ";
    }
    
}

void insertionsort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){

              if(arr[j]>temp) {

                    arr[j+1]=arr[j];

              }     
              else{
                break;
              }


        }
        arr[j+1]=temp;             //when j reaches else positio
        print(arr,5);
        cout<<endl;
    }
}
int main(){
    int arr[5]={10,1,11,5,2};
    insertionsort(arr,5);
    print(arr,5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]	<<endl;
    // }
    
    
    return 0;
}