#include <iostream>
using namespace std;
int getpivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int binarysearch(int arr[], int s,int e, int key)
{

    int start = s;
    int end = e;
    int mid = start + (end - start) / 2; // here the fault is that if while adding the value exceeds the limit of an integer which is  2 pow 31 -1,then it might show error so instead use this formula  MID=START + (END-START)/2
    while (start <= end)
    {

        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


    int pivotnum(int arr[],int n,int key){
        int pivot=getpivot(arr,n);
        if (key>=arr[pivot] && key<=arr[n-1] ){
           return binarysearch(arr,pivot,n-1, key);
        }
        else{
            return binarysearch(arr,0,pivot,key);
        }
    }


int main()
{
    int num[5] = {7, 9, 1, 2, 3};
    int pivot=getpivot(num,5);
    cout << "pivot is " << pivotnum(num, 5,2) << endl;

    return 0;
}