#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    return sum;
}

int main(){
    //Reference Variable
    // int i=5;
    // int &j=i;
    // cout<<j	<<endl;


    //Dyanmic Memory Allocation >> Heaps

    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"sum is "<<getsum(arr,n);

    return 0;
}