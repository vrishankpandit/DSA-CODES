#include<iostream>
#include<vector>
using namespace std;

 vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int i=0;
        int j=0;

        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            v.push_back(nums1[i]);
            i++;
        }

        while(j<n){
           v.push_back(nums2[j]);
           j++;
        }


        // for (int a =0;a<max(nums1.capacity(),nums2.capacity());a++){
        //     if(nums1[i]<nums2[j]){
        //         v.push_back(nums1[i]);
        //         i++;
        //     }
        //     else{
        //         v.push_back(nums2[j]);
        //         j++;
        //     }


        // }
        return v;
    }

    void print(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "	<<endl;
    }
}
int main(){

    vector<int> v={2,5,7,9,10};
    vector<int> b={1,3,11};
    vector<int> a=merge(v,v.size(),b,b.size());

    print(a);
    
    return 0;
}