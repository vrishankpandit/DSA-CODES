#include<iostream>
using namespace std;

// void update(int *p){
    
//     *p=*p+1;

// }

int getsum(int *arr,int n){

cout<<"size is "<<sizeof(arr)<<endl;
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];

}
return sum;

}


int main(){
    // int val=5;
    // int *p=&val;
    // cout<<"before "<<*p	<<endl;
    // update(p);
    // cout<<"before "<<*p	<<endl;


    int arr[6]={1,2,3,4,5};

    cout<<getsum(arr,5)<<endl;
    cout<<getsum(arr+2,2)<<endl;
    return 0;
}