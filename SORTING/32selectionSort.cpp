#include<iostream>
using namespace std;

void print(int *arr,int n){
    for (int i = 0; i < 12; i++)
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
        print(arr,12);
        cout<<endl;
    }
    

}
int main(){

    int arr[12]={7,4,8,3,0,7,8,5,3,5,8,1};
    selectionsort(arr,11);
    
    
    return 0;
}