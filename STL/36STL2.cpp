#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    

    cout<<binary_search(v.begin(),v.end(),6)	<<endl;

    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl;
    for(auto i:v){
        cout<<i	<<endl;
    }
    cout	<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd	<<endl;
    return 0;
}