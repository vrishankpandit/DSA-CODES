#include <iostream>
#include <math.h>
using namespace std;

int main(){

// NUMBER TO BINARY
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i = i + 1; // right shift operator
    }
    cout <<  "in binary form is " << ans << endl;
    return ans;
}


// BINARY TO NUMBER

    // int a;
    // cout<<"enter binary number "	<<endl;
    // cin>>a;

    
    // int ans=0;
    // int i=0;
    // while(a!=0){
    //         int digit=a%10;

    //          if(digit==1){
    //             ans=(pow(2,i) +ans);
                
    //          }
    //          a=a/10;
    //          i++;
             
    // }
              
    // cout<<ans	<<endl;

    // return 0;
}