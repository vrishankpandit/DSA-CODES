#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;++j){
            if(j==i+1 || j == n - i - 1 || i == 0){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}