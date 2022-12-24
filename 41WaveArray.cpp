#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  void convertToWave(int n, vector<int>& arr){
        vector<int> v;
        for (int i=0;i<n;i++){
            if(i+1>=n){
                v.push_back(arr[i]);
            }
            else{
            
            v.push_back(arr[i+1]);
            v.push_back(arr[i]);
            i++;
            }
        }
        for(auto i:v){
            cout<<i<<" ";
        }
    }
int main(){
    vector<int> v={2,6};
    convertToWave(v.size(),v);
    return 0;
}