#include<iostream>
#include<algorithm>
#include <cstring>
using namespace std;

class hero{

//properties
private:
int health;
public:
char *name;
char level;

//
hero(){
    cout<<"constructor called"<<endl;
    name=new char[100];
}

// //parametrized constructor
// hero(int health){
//     this->health=health;
//     cout<<"address of ramesh is "<<this<<endl;
// }

//COPY CONSTRUCTOR

hero(hero& temp){
// deep copy
char *ch=new char[strlen(temp.name)+1];
strcpy(ch,temp.name);
this->name=ch;

cout<<"copy constructor called "	<<endl;
this->health=temp.health;
this->level=temp.level;

}

void print(){
    // cout<<health<<endl;
    cout<<"name is "<<this->name	<<endl;
    cout<<"health is "<<this->health	<<endl;
    cout<<"level is "<<this->level	<<endl;
}

int gethealth(){
    return health;
}

char getlevel(){
    return level;
}

void setname(char name[]){
    strcpy(this->name,name);
}

void sethealth(int h){
    health=h;
}

void setlevel(char ch){
    level=ch;
}

};

int main(){

    hero hero1;
    hero1.sethealth(70);
    hero1.setlevel(70);
    char name[7]="suiiii";
    hero1.setname(name);
    hero hero2(hero1);
    hero1.print();

    hero1.name[2]='o';

    hero2.print();


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

    // hero ramesh(10);
    // cout<<"address of ramesh "<<&ramesh<<endl;
    
    return 0;
}