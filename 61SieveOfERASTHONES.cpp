#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int countprimes(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);   //declaring all element as true

    prime[0]=prime[1]=false;

    for(int i=0;i<n;i++){
        if(prime[i]){               //if prime[i] is true
            cnt++;

            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
        }
    }
    return cnt;
}

int main(){
    
    int a=9;
    cout<<countprimes(a)	<<endl;

    return 0;
}