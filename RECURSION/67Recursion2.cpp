//fibonacci series

#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans=fib(n-1)+fib(n-2);

    return ans;
}
//

int main(){
    int n;
    cin>>n;
    //where n is the (n+1)th term of a fibbonacci series
    cout<<fib(n);
    cout<<endl;
    return 0;
}