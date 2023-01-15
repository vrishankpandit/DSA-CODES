#include<iostream>
using namespace std;


    void segregateElements(int arr[],int n)
    {
        int low=n-1;
        int high=n-1;
        
        while(high>=0){
            if(arr[low]>=0 && arr[high]>=0 && low>=0){
                low--;
                
            }
            else if(arr[low]<0 && arr[high]>=0 &&  low>=0){
                swap(arr[low],arr[high]);
                high--;
            }
            else {
                low--;
            }
        }
        
        
    }
int main(){
    int arr[8]={1 ,-1 ,3 ,2 ,-7 ,-5 ,11 ,6};

    segregateElements(arr,8);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}