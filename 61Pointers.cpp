#include<iostream>
using namespace std;

int main(){
    int num=6;
    int *p=&num;
    (*p)++;
    cout<<"num "<<num	<<endl;
    cout<<"*p "<<(*p)	<<endl;



    
    return 0;
}