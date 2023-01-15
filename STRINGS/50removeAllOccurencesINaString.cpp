#include<iostream>
using namespace std;

string occurences(string s,string part){

    while(s.length()!=0 && s.find(part) < s.length() ){
        s.erase(s.find(part),part.length());
        cout<<s.find(part)	<<endl;
    }
    return s;


}


int main(){
    string s;
    cin>>s;
    string part="abc";
    cout<<occurences(s,part)	<<endl;
    
    return 0;
}