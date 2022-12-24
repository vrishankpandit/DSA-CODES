#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<map>
using namespace std;

vector<int> zeroes(vector<int> &nums){

    for(int i=0;i<nums.size();i++){
        if (nums[i]==0){
            nums.push_back(nums[i]);       
        }
    }

    return nums;

}

void print(vector<int> &nums){
    for (auto i:nums){
        cout<<i	<<endl;

    }
}

int main(){

    vector<int> a={0,2,1,0,3};
    vector<int> b=zeroes(a);
    print(b);
    
    
    return 0;
}