#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<map>
using namespace std;

void print(vector<int> &nums){
    for (auto i:nums){
        cout<<i<<endl;

    }
}
vector<int> zeroes(vector<int> &nums){
    
    int a=nums.size();
    int b=0;
    int j=0;
    for(int i=0;i<a;i++){
       
        if (nums[i]!=0){
            swap(nums[b],nums[i]);
            b++;                
        }
    }

    return nums;

}


int main(){

    vector<int> a={0,0,1};
    vector<int> b=zeroes(a);
    print(b);
    
    
    return 0;
}