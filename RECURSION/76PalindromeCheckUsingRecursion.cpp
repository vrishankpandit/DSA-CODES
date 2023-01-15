#include<iostream>
using namespace std;

bool checkpalindrome(string& s,int i,int j){
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }
    else{
        checkpalindrome(s,++i,--j);
    }

}

int main(){

    string s="abbccbba";

    cout<<checkpalindrome(s,0,s.length()-1);
    
    return 0;
}