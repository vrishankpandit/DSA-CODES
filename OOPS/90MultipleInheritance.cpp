#include<iostream>
using namespace std;

class animal{

public:
int age;
int weight;

void bark(){
    cout<<"is barking"	<<endl;
}

};

class human{

    public:
    string color;

    void speak(){
        cout<<"is speaking"<<endl;
    }
};

class hybrid:public animal,public human{

};

int main(){

    hybrid d;
    d.speak();
    d.bark();
    
    return 0;
}