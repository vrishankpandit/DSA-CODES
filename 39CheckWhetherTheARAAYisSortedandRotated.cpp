#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool check(vector <int> &nums){

    int count=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
                count++;
        }
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }

    }
    return count<=1;

} 

int main(){
    vector<int> v={3,4,5,1,2};
    bool ans=check(v);
    cout<<ans	<<endl;
    return 0;
}