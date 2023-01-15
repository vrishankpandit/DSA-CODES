#include<iostream>
using namespace std;

/* 1--> prime
   0--> not prime*/

   bool isprime(int n){

    for(int i=2;i<n;i++){
         int a=n%i;
         if (a==0){
            return 0;
         } 
    }
    return 1;
   }

int main(){
    int a;
    cin>>a;
    

    if(isprime(a)) {
        cout <<" is a Prime number " <<endl;
   }
    else{
       cout<< "Not a prime number "<<endl;

   }
    
    return 0;
}