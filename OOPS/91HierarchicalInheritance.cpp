#include<iostream>
using namespace std;

class a{
public:
void func1(){
    cout<<"inside function 1"	<<endl;
}

};

class b:public a{
public:
void func2(){
    cout<<"inside function 2"	<<endl;
}

};

class c:public a{
public:
void func3(){
    cout<<"inside function 3"	<<endl;
}

};

int main(){

    a obj1;
    obj1.func1();
    cout<<endl;
    b obj2;
    obj2.func2();
    obj2.func1();
    cout<<endl;
    c obj3;
    obj2.func1();
    obj3.func3();
    cout<<endl;
    
    return 0;
}