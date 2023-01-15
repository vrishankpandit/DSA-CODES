#include<iostream>
using namespace std;

int partition(int *arr,int start,int end){
    int count=0;
    int pivot=arr[start];
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right position
    int pivotindex=start+count;
    swap(arr[start],arr[pivotindex]);

    int i=start;
    int j=end;

    while(i<pivotindex && j>pivotindex){
        // if(arr[i]>pivot && arr[j]<pivot){
        //     swap(arr[i],arr[j]);
        //     i++;
        //     j--;
        // }
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;
}

void quicksort(int *arr,int start,int end){

    if(start>end){
        return;
    }

    int j=partition(arr,start,end);
    quicksort(arr,start,j-1);
    quicksort(arr,j+1,end);

}


int main(){
    int arr[5]={2,4,1,6,9};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}