#include<iostream>
using namespace std;

void merge(int *arr,int start,int end){

    int mid=start+(end-start)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int mainarrayindex=start;

    //copy values

    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }

    //merge

    int index1=0;
    int index2=0;
    mainarrayindex=start;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
    else{
            arr[mainarrayindex++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }

}



void mergesort(int *arr,int start,int end){

    int mid=start+(end-start)/2;

    if(start>=end){
        return;
    }

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);

}


int main(){
    
    int arr[7]={2,5,3,6,1,9,8};
    mergesort(arr,0,7-1);
    for (int i = 0; i <7 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}