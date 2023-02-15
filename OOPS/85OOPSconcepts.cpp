#include<iostream>
using namespace std;

class hero{

//properties
private:
int health;
public:
char level;

//
// hero(){
//     cout<<"constructor called"<<endl;
// }

//parametrized constructor
hero(int health){
    this->health=health;
    cout<<"address of ramesh is "<<this<<endl;
}



void print(){
    // cout<<health<<endl;
    cout<<level<<endl;
}

int gethealth(){
    return health;
}

char getlevel(){
    return level;
}

void sethealth(int h){
    health=h;
}

void setlevel(char ch){
    level=ch;
}

};

int main(){

    //dynamic allocation
    // hero *b=new hero;
    // (*b).sethealth(80);
    // cout<<(*b).gethealth()<<endl;
    // b->setlevel('g');
    // cout<<(*b).getlevel()<<endl;



    //creation of object

    // hero ramesh;
    // ramesh.sethealth(70);
    // cout<<"ramesh ki health hai "<<ramesh.gethealth()<<endl;
    // // ramesh.health=70;
    // ramesh.level='a';

    // // cout<<ramesh.health<<endl;
    // cout<<ramesh.level<<endl;

    hero ramesh(10);
    cout<<"address of ramesh "<<&ramesh<<endl;
    
    return 0;
}