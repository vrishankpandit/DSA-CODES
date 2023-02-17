#include<iostream>
using namespace std;

class a{
public:
void func(){
    cout<<"inside function 1"	<<endl;
}

int func(char name){
    cout<<"hello"<<endl;
}

void sayhello(string name){
    cout<<"hello"<<name<<endl;
}

};



int main(){

    a obj;
    obj.func();    //avoiding function overloading
    obj.func('a');
    
    return 0;
}