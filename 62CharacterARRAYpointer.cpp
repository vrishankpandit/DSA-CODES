#include<iostream>
using namespace std;

int main(){
    char ch[6]="abcde";
    char *p=&ch[0];
    cout<<p	<<endl;      //returns the content of ch
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*p+1<<endl;
    return 0;
}