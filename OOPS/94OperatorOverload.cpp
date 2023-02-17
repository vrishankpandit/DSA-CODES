#include<iostream>
using namespace std;

class   class1{
public:
int a;
int b;

void operator+ (class1& obj){

    int value1=this->a;
    int value2=obj.a;
    cout<<value1-value2;
}



};

int main(){

    class1 obj1;
    class1 obj2;

    obj1.a=7;
    obj2.a=4;

    obj1 + obj2;

    return 0;
}