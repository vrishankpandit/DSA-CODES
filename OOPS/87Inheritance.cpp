#include<iostream>
using namespace std;

class human{

public:
int height;
int age;
int weight;

public:
int getage(){
    return this->age;
}
int setweight(int w){
    this->weight=w;
}
};

class male:public human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"	<<endl;
    }
};


int main(){
    
    return 0;
}