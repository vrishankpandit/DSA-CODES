#include<iostream>
using namespace std;

int main(){
    char ch='a';
    char *ptr=&ch;
    ch++;
    cout<<ch	<<endl;
    cout<<*ptr<<endl;

    // int a[]={1,2,3,4};
    // int *p=a++;

    char st[]="ABCD";
    for(int i=0;st[i]!='\0';i++){
        cout<<"*st is "<<*st<<endl;
        cout<<*(st)+i<<endl;
        cout<<*(i+st)	<<endl;
    }


    float arr[5]{12.5,10.0,13.5,90.5,0.5 };
    float *ptr1=&arr[0];
    float *ptr2=ptr1+3;
    cout<<ptr1	<<endl;
    cout<<ptr2	<<endl;
    cout<<ptr2-ptr1	<<endl;

    return 0;
}