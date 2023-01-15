#include<iostream>
using namespace std;

// int factorial(int n){

//     // ?base code
//     if(n==0){
//         return 1;
//     }

//     return n*factorial(n-1);
// }

// void counting(int n){// print 54321

//         if (n==0){
//             return ;
//         }
//         cout<<n	;
//         counting(n-1);
// }

void counting(int n){// print 12345

        if (n==0){
            return ;
        }
        counting(n-1);
        cout<<n	;
}
int main(){
    int n;
    cin>>n;
    
    counting(n);

    // cout<<"factorial of "<<n<<" is "<<factorial(n)	<<endl;
    // return 0;
}