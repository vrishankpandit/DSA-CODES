#include<iostream>
using namespace std;

void print(int *arr,int n){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]	<<" ";
    }
    
}

void selectionsort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;

            }
        }
        swap(arr[minindex],arr[i]);
        print(arr,5);
        cout<<endl;
    }
    

}
int main(){

    int arr[5]={10,1,11,8,6};
    selectionsort(arr,5);
    
    
    return 0;
}