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

class germanshephard:public dog{

};

int main(){

    germanshephard d;
    d.speak();
    
    return 0;
}