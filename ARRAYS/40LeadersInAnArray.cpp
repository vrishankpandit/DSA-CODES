#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   void leaders(int arr[], int n){
        int i=0;
        int j=0;
        for (;i<n;i++){
              for (;j<i;j++){
                  if(arr[i]<arr[j]){
                      break;
                  }
                  else{
                     cout<<arr[i];
                     }
              }
        }
        cout<<arr[n-1];
        
    }


    //OR

    class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> v;
        
        long long max = a[n-1];
        
        //We start traversing the array from last element.
        for(long long i =n-1; i >= 0; i--){
            //Comparing the current element with the maximum element stored. 
            //If current element is greater than max, we add the element.
            if(a[i] >= max){
                //Updating the maximum element.
                max = a[i];
                //Storing the current element in vector for leaders.
                v.push_back(max);
            }
        }
        //Finally reversing the vector in which leaders are stored.
        reverse(v.begin(), v.end());
        //returning the vector.
        return v;
        
    }
};






int main(){
    int a[6]={16,17,4,3,5,2};
    leaders(a,6);
    return 0;
}