#include<iostream>
using namespace std;

int power(int a ,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //recursive call
    int ans=power(a,b/2);

    if(b%2==0){
        //if power is even
        return ans*ans;
    }
    else{
        //if power is odd
        return a*ans*ans;
    }

}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"a to the power b is "<<power(a,b);

    return 0;
}