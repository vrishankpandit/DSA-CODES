#include<iostream>
#include<set>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main(){
    stack<string> s;
    s.push("acha");
    s.push("ok");
    s.push("nahu");

    cout<<s.top()	<<endl;

    s.pop();
    cout<<"nahu popped out "	<<endl;
    cout<<s.top()	<<endl;

    queue<string> a;

    a.push("lops");
    a.push("noooooo");

    cout<<"first element in queue is"<<a.front()	<<endl;


    //max heap
    priority_queue<int> maxi;

    maxi.push(8);
    maxi.push(10);
    maxi.push(5);
    maxi.push(9);

    int m=maxi.size();
    for (int i=0;i<m;i++){
        cout<<maxi.top()	<<endl;
        maxi.pop();
    }
    cout<<endl;
    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    mini.push(8);
    mini.push(10);
    mini.push(5);
    mini.push(9);

    int n=mini.size();
    for (int i=0;i<n;i++){
        cout<<mini.top()	<<endl;
        mini.pop();
    }

    cout<<endl;
    // SET
    set<int> p;
    p.insert(9);
    p.insert(7);
    p.insert(8);
    p.insert(1);
    p.insert(5);
    p.insert(5);
    p.insert(9);
    p.insert(0);

    for(auto i: p){
        cout<<i	<<endl;
    }
    cout<<endl;

    set<int>::iterator itr=p.find(5);

    for(auto it=itr;it!=p.end();it++){
            cout<<*it	<<endl;
    }

    // MAPS

    map<int,string> ok;
    ok[1]="heheh";
    ok[8]="pols";
    ok[6]="LOL";

    ok.insert({10,"lmao ded"});

    for(auto i:ok){
        cout<<i.first<<" "<<i.second	<<endl;
    }
    cout	<<endl;

    auto it=ok.find(8);
    for(auto i=it;i!=ok.end();i++){
        cout<<(*i).first	<<endl;
    }



    return 0;
}