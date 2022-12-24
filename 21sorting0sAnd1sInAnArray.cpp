#include<iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort(int arr[],int n){
       int i=0,j=n-1;
       while(i<j){
        if(arr[i]==0 && i<j){
            i++;
        }
        if(arr[j]==1 && i<j){
            j--;
        }
        
        swap(arr[i],arr[j]);
       } 

}

int main(){
    int num[100]={1,0,0,1,1,1,0,0};
    cout<<"before sorting"	<<endl;
    printarray(num,8);
    cout	<<endl;
    sort(num,8);
    cout<<"after sorting"	<<endl;
    printarray(num,8);
    return 0;
}