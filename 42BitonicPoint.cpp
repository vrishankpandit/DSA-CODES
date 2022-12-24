#include<iostream>
using namespace std;
int findMaximum(int arr[], int n) {
        int start=0;
        int end=n-1;
        int mid=end +(start-end)/2;
        
        while (start<end){
            if(arr[mid-1]<arr[mid]){
                start=mid;
            }
            else{
                end=mid-1;
            }
            mid=end +(start-end)/2;
            
        }
        return arr[mid];
	}
int main(){
    int arr[20]={2 ,25, 52, 55, 100, 250, 1000, 5000, 500, 450, 440, 400, 350, 321, 300, 250, 220, 201, 109, 5};
    cout<<findMaximum(arr,20);

    return 0;
}