#include<iostream>
using namespace std;

class animal{

    public:
    void speak(){
        cout<<"speaking"<<endl;

    }
};

class dog:public animal{

    public:
    void speak(){
        cout<<"barking"	<<endl;
    }

};

int main(){
    
    dog obj;
    obj.speak();

    return 0;
}