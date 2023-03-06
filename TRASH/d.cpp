#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        int j;
        for(j=1;j<n;j++){
            if(j==a){
                cout<<a;
            }
            else{
                cout<<" ";
            }
        }
        for(;j>0;j--){
            if(j==a){
                cout<<a;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
        a++;
       
    }

    a=4;
    for(int i=0;i<n+1;i++){
        int j;
        for(j=1;j<n;j++){
            if(j==a){
                cout<<a;
            }
            else{
                cout<<" ";
            }
        }
        for(;j>0;j--){
            if(j==a){
                cout<<a;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
        a--;
        if(a==n+1){
            a=0;
        }
    }
    return 0;
}