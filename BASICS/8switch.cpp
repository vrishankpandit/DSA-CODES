#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    // switch(num){

    //     case 1: cout<<"1"	<<endl;
    //     break;
    //     case 2: cout<<"ok"	<<endl;
    //     break;
    //     default: cout<<"k"	<<endl;
    //     break;

    // }

    // while (1)
    // {

    //     switch (num)
    //     {
    //         case 1:cout<<"ok"	<<endl;
    //         break;
    //     }
    //         exit(0);        //to get out of infinite loop 
    // }

    int n;
    cout<<"enter the price "	<<endl;
    cin>>n;
    int a=100;
    int b=50;
    int c=20;
    int d=1;

    switch (1)
    {
    case 1:cout<<"100 rupee notes required are"<<n/a	<<endl; 
            n=n%a;
    case 2:cout<<"50 rupees notes required are"<<n/b	<<endl;            
            n=n%b;
            
    case 3:cout<<"20 rupees notes required are"<<n/c	<<endl;            
            n=n%c;
            
    case 4:cout<<"1 rupees notes required are"<<n/d	<<endl;            
            n=n%d;
            
    }
    return 0;
}