#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> &arr){
    int s=0;
    int e=arr.size()-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e++;
    }
    return arr;
}


vector <int> findarraysum(vector<int> &a,int n,vector<int> &b,int m){
        int i=n-1;
        int j=m-1;
        int carry=0;
        vector <int> ans;
        
        while(i>=0 && j>=0){


        int val1=a[i];    
        int val2=b[j]; 
        int sum=val1+val2+carry;
        carry=sum/10;

        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
        }
        while(i>=0){
            int val1=a[i];    
        
        int sum=val1+carry;
        carry=sum/10;

        sum=sum%10;
        ans.push_back(sum);
        i--;
        }
        
        while(j>=0){
            int val2=b[j];    
        
        int sum=val2+carry;
        carry=sum/10;

        sum=sum%10;
        ans.push_back(sum);
        j--;
        }

        while(carry!=0){

        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);

        }

        
        return reverse(ans);
}
int main(){

    vector<int> a={1,2,3};
    vector<int> b={1,2,3};
    vector<int> c=findarraysum(a,3,b,3);
    for (auto i:c){
        cout<<i;
    }
    return 0;
}