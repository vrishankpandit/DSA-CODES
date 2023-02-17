#include<iostream>
using namespace std;

class animal{

public:
int age;
int weight;

void speak(){
    cout<<"is speaking"	<<endl;
}

};

class dog:public  animal{

};

int main(){

    dog d;
    d.speak();
    
    return 0;
}