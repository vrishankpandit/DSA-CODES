#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> waveprint(int arr[][4],int rows,int cols){
    vector<int> ans;

    for(int j=0;j<cols;j++){
        // odd column valo ko reverse order mein print krna hai
        if(cols&1){
            for(int i=rows-1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }

        }
        else{
            for(int i=0;i<rows;i++){
                ans.push_back(arr[i][j]);
            }
        }

    }
    return ans;
}

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // cout<<waveprint(arr,3,4);
    return 0;
}