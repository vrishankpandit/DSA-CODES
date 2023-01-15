#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int arr[3][4];
       for (int col = 0; col < 4; col++)
    {
        for (int row= 0; row < 3; row++)
        {
            cin>>arr[row][col];
        }
        
    }
    


    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
        
    }

    int target;
    cout<<"enter the targer"	<<endl;
    cin>>target;
    if (ispresent(arr,target,3,4)){
        cout<<"element found"	<<endl;
    }
    else{
        cout<<"element not found"	<<endl;
    }
    return 0;
}