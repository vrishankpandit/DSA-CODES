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

    // int n;
    // cin>>n;
    // int *arr=new int[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"sum is "<<getsum(arr,n);

    //Dynamic Memory Allocation For 2D Arrays 
    int row;
    cin>>row;
    int col;
    cin>>col;

    int **arr =new int *[row];
    for(int i=0;i<row;i++){
        arr[i]=new int [col];
    }

    //taking input
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //output
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for (int i=0;i<row;i++){
        delete []arr[i];
    }

    delete []arr;
    

    return 0;
}