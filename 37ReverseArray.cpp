#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

vector<int> reversearray(vector<int> arr,int m){

       int s=m+1;
       int e=arr.size()-1;
       

       while (s<=e){
         swap(arr[s],arr[e]);
            s+=1;        
            e-=1;        
       }

       return arr;


}

void print(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "	<<endl;
    }
}
int main(){

    vector<int> v={7,8,9,4,3};
    vector<int> ans=reversearray(v,1);

    print(ans);
    


    
    return 0;
}