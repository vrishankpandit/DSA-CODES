#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

  int kthSmallest(int arr[], int i, int r, int k) {

        sort(arr,arr+r+1);
        for (int j = 0; j <= r; j++)
        {
            cout<<arr[j]	<<" ";
        }
        cout<<endl;
        
        return{arr[k-1]};
        
    }

int main(){
    
    int arr[5]={7,10,4,20,15};
    cout<<kthSmallest(arr,0,4,4)	<<endl;
    return 0;
}