#include<iostream>
using namespace std;

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
    }
}
int main(){
    int arr[5]={6,2,8,5,10};
    insertionsort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]	<<endl;
    }
    
    
    return 0;
}