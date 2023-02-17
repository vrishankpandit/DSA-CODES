#include<iostream>
using namespace std;

class a{
public:
void func(){
    cout<<"inside function 1"	<<endl;
}

};

class b{
public:
void func(){
    cout<<"inside function 2"	<<endl;
}

};

class c:public a,public b{


};

int main(){

    c obj;
    obj.a::func();  //this syntax used to resolve ambiguity
    obj.b::func();

    return 0;
}