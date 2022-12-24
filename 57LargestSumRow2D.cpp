#include<iostream>
using namespace std;
int largestrowwisesum(int arr[][4],int row,int col){
    int ans=INT_LEAST8_MIN;
    int a=-1;
    cout<<"printing sum"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }

        cout<<sum<<" ";
        if(sum>ans){
            ans=sum;
            a=i;
        }
        
    }
    cout<<endl;
    cout<<"largest sum is of row"<<endl;
    return a;
    


}
int main(){
    int arr[3][4];
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<largestrowwisesum(arr,3,4);
    return 0;
}