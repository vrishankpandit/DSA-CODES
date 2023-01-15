#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){
    for(int i=0;i<size;i++){
        
        for(int j=0;j<size-i-1;j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


}
int main(){
    int arr[5]={6,2,8,4,10};
    bubblesort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}