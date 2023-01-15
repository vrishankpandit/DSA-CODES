#include<iostream>
using namespace std;

string adjacent(string s){
    int i=0;
    while(i<s.length())
    {
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=-1;
            }
        i++;    
        }
        return s;
    }
    
int main(){
    string s;
    cin>>s;
    cout<<adjacent(s)	<<endl;
    return 0;
}